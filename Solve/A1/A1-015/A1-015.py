a=input()
b=input()
c=int(input())
if len(a) > 5 and len(b) > 5:
    print(f"{a[:2]}{b[-1]}{c%10}")
else:
    print(f"{a[0]}{c}{b[-1]}")