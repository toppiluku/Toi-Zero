od=0
ev=0
for i in range(3):
    a = int(input())
    if (a % 2 == 0): ev+=1
    else: od+=1
print(f"even {ev}")
print(f"odd {od}")