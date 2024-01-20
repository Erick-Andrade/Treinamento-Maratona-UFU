words = input().split('@')
ans = 0
if len(words) == 2:
    nome, dominio = words
    ok = 1
    for c in nome:
        if (c != '.' and (c < '0' or c > '9') and c != '_' and (c < 'a' or c > 'z')):
            ok = 0
            break

    for c in dominio:
        if (c != '.' and (c <'a' or c > 'z')):
            ok = 0
            break

    if dominio[-1] == '.':
        ok = 0

    if ok == 1:
        ans = 1

print(ans)