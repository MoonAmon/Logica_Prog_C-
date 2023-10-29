import pandas as pd

class TicTacToe:
    """Inicialize a tic-tac-toe game"""
    def __init__(self, jogador):
        self.field = [[" " for _ in range(3)] for _ in range(3)]
        self.jogador = jogador
        self.count_play = 0
    
    def fazer_jogada(self, linha, coluna, jogador_atual):
        if self.field[linha][coluna] == ' ':
            self.field[linha][coluna] = jogador_atual 
            self.count_play += 1
        else:
            print("Posição ja ocupada!")
            

    def troca_jogador(self):
        if self.jogador == "X":
            self.jogador = "O"
        else:
            self.jogador = "X"

    def verificar_vitoria(self):
        # verifica linhas
        for row in self.field:
            if row[0] == row[1] == row[2] != " ":
                return row[0] 

        # verifica coluna
        for col in range(3):
            if self.field[0][col] == self.field[1][col] == self.field[2][col] != " ":
                return self.field[0][col]
        
        # verifica diagonais
        if self.field[0][0] == self.field[1][1] == self.field[2][2] != " ":
            return self.field[0][0]
        if self.field[0][2] == self.field[1][1] == self.field[2][0] != " ":
            return self.field[0][2]
        
        # se não houver vencedor
        return None
    
    def imprimir_tabuleiro(self):
        print(pd.DataFrame(self.field))
        
    def jogar(self):
        while True:
            self.imprimir_tabuleiro()
            row = int(input("{} digite a linha que deseja jogar: ".format(self.jogador)))
            col = int(input("{} digite a coluna que deseja jogar: ".format(self.jogador)))
            self.fazer_jogada(row, col, self.jogador)
            vitoria = self.verificar_vitoria()
            if vitoria != None:
                self.imprimir_tabuleiro()
                print("{} venceu!".format(vitoria))
                break
            elif self.count_play == 9:
                print("Empate!")
                break
            else:
                self.troca_jogador()
