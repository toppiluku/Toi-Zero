a=int(input())
b=input()
c=(a%10)*10+(a//10)
if (b=='+'):
    r=a+c
else:
    r=a*c
print(f"{a} {b} {c} = {r}")