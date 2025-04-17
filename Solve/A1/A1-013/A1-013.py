s=input()
n=input()
if (s=='H' and n=='4567'):
    print("safe unlocked")
elif (s=='H'):
    print("safe locked - change digit")
elif (n=='4567'):
    print("safe locked - change char")
else:
    print("safe locked")