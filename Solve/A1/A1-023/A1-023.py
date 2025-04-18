temp = int(input())
b = input()
if (b == 'F'):
    temp = (temp - 32) * 5 / 9

if temp <= 0:
    print("solid")
elif temp >= 100:
    print("gas")
else:
    print("liquid")