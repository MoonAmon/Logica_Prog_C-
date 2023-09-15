import pandas as pd

tabuleiro = [['o' for _ in range(3)] for _ in range(3)]

tab_visual = pd.DataFrame(tabuleiro)
tab_visual.head()


def fazer_jogada(tabuleiro, linha, coluna, jogador, jogadas):
    if tabuleiro[linha][coluna] == ' ':
        tabuleiro[linha][coluna] = jogador
        jogadas += 1
    else:
        print("Lugar já ocupado! Selecione outra posição!")


def verificar_vitoria(tabuleiro, jogador, ganhou):
    """Posições de vitorias: x-y (0-0, 1-1, 2-2), (0-0, 0-1, 0-2), (1-0, 1-1, 1-2) """
    for i in range(3):
        if tabuleiro[0][0] == tabuleiro[1][1] == tabuleiro[2][2] == jogador:
            ganhou = True
            return ganhou
        elif tabuleiro[i][0] == tabuleiro[i][1] == tabuleiro[i][2] == jogador:
            ganhou = True
            return ganhou
        elif tabuleiro[0][i] == tabuleiro[1][i] == tabuleiro[2][i] == jogador:
            ganhou = True
            return ganhou
        elif tabuleiro[0][2] == tabuleiro[1][1] == tabuleiro[2][0] == jogador:
            ganhou = True
            return ganhou
    return ganhou


def exibir_tabuleiro(tabuleiro):
    print(tabuleiro)


def jogo_da_velha():
    tabuleiro = [[' ' for _ in range(3)] for _ in range(3)]
    tabuleiro = pd.DataFrame(tabuleiro)

    ganhou = False
    jogadas = 0
    jogador = 'X'

    while not ganhou:

        exibir_tabuleiro(tabuleiro)

        linha = int(input("Escolha a linha: "))
        coluna = int(input("Escolha a coluna: "))

        fazer_jogada(tabuleiro, linha, coluna, jogador, jogadas)
        exibir_tabuleiro(tabuleiro)
        verificar_vitoria(tabuleiro, jogador, ganhou)


        if ganhou:
            print("Jogador {} ganhou!".format(jogador))
            return 0
        elif jogadas == 9:
            print("Empate!")
            return 0

        if jogador != 'X':
            jogador = 'X'
        else:
            jogador = 'O'


jogo_da_velha()