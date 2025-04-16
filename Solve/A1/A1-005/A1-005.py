m=int(input())
d=int(input())
if (d >= 21):
    m+=1
    if(m > 12): m=1
if (m>=10):
    print("fall")
elif (m >= 7):
    print("summer")
elif (m >= 4):
    print("spring")
else: print("winter")