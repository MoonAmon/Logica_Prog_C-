bolo = []

farinha = int(input())
ovo = int(input())
leite = int(input())

bolo.append(farinha / 2)
bolo.append(ovo / 3)
bolo.append(leite / 5)
qntMaxima = bolo[0]
for i in range(0, 2 + 1, 1):
    if qntMaxima > bolo[i]:
        qntMaxima = bolo[i]
print(qntMaxima)
