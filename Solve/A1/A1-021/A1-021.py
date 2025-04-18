n = int(input())
x = 0
if (n <= 1500):
    print("yes")
elif (n % 400 == 0):
    print("yes")
elif (n % 400!=0 and n%4==0 and n%100!=0):
    print("yes")
else:
    print("no")