import tkinter as tk

# create the main window
root = tk.Tk()

# create the chess board 
board = tk.Canvas(root, width=400, height=400)
board.pack()

# difine the size of each square
square_size = 50

# create the squares
for row in range(8):
    for col in range(8):
        x1 = col * square_size
        y1 = row * square_size
        x2 = x1 + square_size
        y2 = y1 + square_size
        if (row + col) % 2 == 0:
            board.create_rectangle(x1, y1, x2, y2, fill="white")
        else:
            board.create_rectangle(x1, y1, x2, y2, fill="black")

# create the chess pieces
import os

# get the absolute path to the directory containing the Python script
dir_path = os.path.dirname(os.path.realpath(__file__))

# define the relative path to the directory containing the PNG files
png_dir = "pieces-basic-png"

# define the file names for the PNG files
file_names = {
    "wr": "white-rook.png",
    "wq": "white-queen.png",
    "wp": "white-pawn.png",
    "wkn": "white-knight.png",
    "wki": "white-king.png",
    "wb": "white-bishop.png",
    "br": "black-rook.png",
    "bq": "black-queen.png",
    "bp": "black-pawn.png",
    "bkn": "black-knight.png",
    "bki": "black-king.png",
    "bb": "black-bishop.png"
}

# create a dictionary of PhotoImage objects for each piece
pieces = {}
for piece, file_name in file_names.items():
    file_path = os.path.join(dir_path, png_dir, file_name)
    pieces[piece] = tk.PhotoImage(file=file_path).subsample(2)

# place the chess pieces on the board
for col, piece in enumerate(["wr", "wkn", "wb", "wq", "wki", "wb", "wkn", "wr"]):
    board.create_image(col * square_size + square_size / 2, 0 + square_size / 2, image=pieces[piece])
    board.create_image(col * square_size + square_size / 2, 6 * square_size + square_size / 2, image=pieces[piece.replace('w', 'b')])
    board.create_image(col * square_size + square_size / 2, 1 * square_size + square_size / 2, image=pieces["wp"])

# start the main loop
root.mainloop()