d = int(input())
m = int(input())
a = ["capricorn", "aquarius", "pisces", "aries", "taurus", "gemini",
     "cancer", "leo", "virgo", "libra", "scorpio", "sagittarius", "capricorn"]
day = [20, 19, 21, 20, 21, 22, 23, 23, 23, 24, 23, 22]
print(a[m] if d >= day[m-1] else a[m-1])