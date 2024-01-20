words = input().split()
maior = 0
i = 0
for word in words:
    if (len(words[maior]) < len(word)):
        maior = i
    i += 1
    
print(words[maior])