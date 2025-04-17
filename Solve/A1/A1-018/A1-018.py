a = ["I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"]
n = int(input())
if (1 <= n and n<=9):
    print(a[n-1])
elif (n < 0):
    print("Error : Please input positive number")
else:
    print("Error : Out of range")