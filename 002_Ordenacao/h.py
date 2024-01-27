naipe = ["Paus", "Ouro", "Coração", "Espada"]
carta = [ "Às", 2, 3, 4, 5, 6, 7, 8, 9, 10, "Valete", "Dama", "Rei"]
n, c = map(int, input().split())
print(f"{carta[c-1]} de {naipe[n]}")
