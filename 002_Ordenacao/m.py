n = int(input())
nomes = []

for i in range(n):
    nome = input()
    nomes.append(nome)

nomes.sort()

for nome in nomes:
    print(nome)
    nome = nome.