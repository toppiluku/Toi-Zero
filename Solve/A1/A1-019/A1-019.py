a = input()
b = input()
c = input()
cnt = 0

if a == b: cnt += 1
if a == c: cnt += 1
if b == c: cnt += 1

if (cnt==0) :
    print("all different")
elif (cnt == 1):
    print("neither")
else:
    print("all the same")