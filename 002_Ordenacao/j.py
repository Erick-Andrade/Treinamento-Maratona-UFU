while (True):
    
    try:
        a, p = map(int, input().split())
        aliados = list(range(1, a+1))
        index = 0
        while len(aliados) > 1:
            index = (index + p - 1) % len(aliados)
            aliados.pop(index)
        print(aliados[0])
    except:
        break
