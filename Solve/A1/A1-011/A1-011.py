a = input().strip()
i = 0
while (i<len(a)):
    j = i
    while (j < len(a) and a[i] == a[j]):
        j += 1
    print(f"{j - i}{a[i]}", end='')
    i = j