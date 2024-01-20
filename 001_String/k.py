inp = input()
qtd_caracteres = 0
words = inp.split()

print(len(words))
for word in words:
    qtd_caracteres += len(word)

print(qtd_caracteres)
