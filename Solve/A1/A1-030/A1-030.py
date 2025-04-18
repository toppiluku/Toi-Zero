n = int(input())
nums = list(map(int, input().split()))

result = [] 
for i in range(n):
    a = nums[2*i]
    b = nums[2*i+1]
    result.append(max(a, b))

if(n==1): print(max(a,b))
else:
    expression = ' + '.join(map(str, result))
    total = sum(result)
    print(f"{expression} = {total}")