import pandas as pd


def fazer_jogada(tabuleiro, linha, coluna, jogador, jogadas):
    if tabuleiro[coluna][linha] == ' ':
        tabuleiro[coluna][linha] = jogador
        jogadas += 1
        return jogadas
    else:
        print("Lugar já ocupado! Selecione outra posição!")
        return jogadas
        
def troca_jogador(jogador, jogadas):
    if jogadas % 2 == 0:
        jogador = 'X'
        return jogador
    else:
        jogador = 'O'
        return jogador


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

    while not ganhou or jogadas != 9:

        exibir_tabuleiro(tabuleiro)

        linha = int(input("Jogador {}. \nEscolha a linha: ".format(jogador)))
        coluna = int(input("Jogador {}. \nEscolha a coluna: ".format(jogador)))

        jogadas = fazer_jogada(tabuleiro, linha, coluna, jogador, jogadas)
        exibir_tabuleiro(tabuleiro)
        ganhou = verificar_vitoria(tabuleiro, jogador, ganhou)

        jogador = troca_jogador(jogador, jogadas)

    if ganhou:
        print("Jogador {} ganhou!".format(jogador))
    else:
        print("Empate!")


jogo_da_velha()