st = input().lower()
vow = 'aeiou'
cnt = 0

for i in st:
    if i in vow:
        cnt += 1

print(cnt)
