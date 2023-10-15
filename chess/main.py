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
pieces = {
    "wr": tk.PhotoImage(file=r"C:\Users\USER\OneDrive\Área de Trabalho\repo\Logica_Prog_C-\chess\pieces-basic-png\white-rook.png").subsample(2),
    "wq": tk.PhotoImage(file=r"C:\Users\USER\OneDrive\Área de Trabalho\repo\Logica_Prog_C-\chess\pieces-basic-png\white-queen.png").subsample(2),
    "wp": tk.PhotoImage(file=r"C:\Users\USER\OneDrive\Área de Trabalho\repo\Logica_Prog_C-\chess\pieces-basic-png\white-pawn.png").subsample(2),
    "wkn": tk.PhotoImage(file=r"C:\Users\USER\OneDrive\Área de Trabalho\repo\Logica_Prog_C-\chess\pieces-basic-png\white-knight.png").subsample(2),
    "wki": tk.PhotoImage(file=r"C:\Users\USER\OneDrive\Área de Trabalho\repo\Logica_Prog_C-\chess\pieces-basic-png\white-king.png").subsample(2),
    "wb": tk.PhotoImage(file=r"C:\Users\USER\OneDrive\Área de Trabalho\repo\Logica_Prog_C-\chess\pieces-basic-png\white-bishop.png").subsample(2),
    "br": tk.PhotoImage(file=r"C:\Users\USER\OneDrive\Área de Trabalho\repo\Logica_Prog_C-\chess\pieces-basic-png\black-rook.png").subsample(2),
    "bq": tk.PhotoImage(file=r"C:\Users\USER\OneDrive\Área de Trabalho\repo\Logica_Prog_C-\chess\pieces-basic-png\black-queen.png").subsample(2),
    "bp": tk.PhotoImage(file=r"C:\Users\USER\OneDrive\Área de Trabalho\repo\Logica_Prog_C-\chess\pieces-basic-png\black-pawn.png").subsample(2),
    "bkn": tk.PhotoImage(file=r"C:\Users\USER\OneDrive\Área de Trabalho\repo\Logica_Prog_C-\chess\pieces-basic-png\black-knight.png").subsample(2),
    "bki": tk.PhotoImage(file=r"C:\Users\USER\OneDrive\Área de Trabalho\repo\Logica_Prog_C-\chess\pieces-basic-png\black-king.png").subsample(2),
    "bb": tk.PhotoImage(file=r"C:\Users\USER\OneDrive\Área de Trabalho\repo\Logica_Prog_C-\chess\pieces-basic-png\black-bishop.png").subsample(2)
}

# place the chess pieces on the board
for col, piece in enumerate(["wr", "wkn", "wb", "wq", "wki", "wb", "wkn", "wr"]):
    board.create_image(col * square_size + square_size / 2, 0 + square_size / 2, image=pieces[piece])
    board.create_image(col * square_size + square_size / 2, 6 * square_size + square_size / 2, image=pieces[piece.replace('w', 'b')])
    board.create_image(col * square_size + square_size / 2, 1 * square_size + square_size / 2, image=pieces["wp"])

# start the main loop
root.mainloop()