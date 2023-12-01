import tkinter as tk
from tkinter import ttk
from PIL import Image, ImageTk
import requests
from io import BytesIO
import pandas as pd

BASE_URL = "https://pokeapi.co/api/v2/pokemon/"

class PokemonApp:
    def __init__(self, root):
        self.root = root
        self.labels = []
        self.name_var = tk.StringVar()

        self.entry = tk.Entry(root, textvariable=self.name_var)
        self.entry.pack()

        self.button = tk.Button(root, text="Search", command=self.display_pokemon_data)
        self.button.pack()

        self.name_text = tk.Text(root, width=50, height=2)
        self.name_text.pack()

    def get_pokemon_data(self, name):
        response = requests.get(BASE_URL + name)
        if response.status_code == 200:
            return response.json()
        else:
            return None
        
    def display_pokemon_data(self):
        name = self.name_var.get()
        data = self.get_pokemon_data(name)
        if data:

            # Apaga dados anteriores
            if self.labels:
                self.labels[-1].destroy()
            self.name_text.delete('1.0', tk.END)

            # Mostrar nome do pokemon
            self.name_text.insert(tk.END, "Name:\n")
            name = data['name'].capitalize()
            self.name_text.insert(tk.END, name)

            # Mostrar sprite do pokemon
            response = requests.get(data['sprites']['front_default'])
            image = Image.open(BytesIO(response.content))
            image = image.resize((100, 100), Image.LANCZOS)  
            photo = ImageTk.PhotoImage(image)
            label = tk.Label(self.root, image=photo)
            label.image = photo  
            label.pack()
            self.labels.append(label)  

            # Mostrar os stats
            stats = {stat['stat']['name']: stat['base_stat'] for stat in data['stats']}
            df = pd.DataFrame(list(stats.items()), columns=['Stats', 'Value'])
            self.display_dataframe(df)


        else:
            print(f"Pokemon {name} not found.")
        
    def display_dataframe(self, df):
        
        # Apagar canvas atual
        if hasattr(self, 'canvas'):
            self.canvas.destroy()
        
        self.canvas = tk.Canvas(self.root, width=500, height=500)
        self.canvas.pack()

        # Desenhar as barras
        max_value = df['Value'].max()
        for i, row in df.iterrows():
            x1 = 50
            y1 = 50 + i * 50
            x2 = 50 + (row['Value'] / max_value) * 400
            y2 = 80 + i * 50
            self.canvas.create_rectangle(x1, y1, x2, y2, fill="blue")

            # Mostrar texto
            self.canvas.create_text(x1, y1, anchor='nw', text=row['Stats'])
            self.canvas.create_text(x2, y1, anchor='nw', text=row['Value'])
    

root = tk.Tk()
app = PokemonApp(root)
root.mainloop()