y = int(input())
c = int(input())

if y <= 1990: t = [1250, 1400, 2000]
elif y <= 1999: t = [1100, 1300, 1700]
else: t = [1000, 1200, 1500]

print(t[0] if c <= 1500 else t[1] if c <= 2000 else t[2])