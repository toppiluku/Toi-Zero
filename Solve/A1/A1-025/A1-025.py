c = input().strip()

val = c[:-1].upper()
ty = c[-1].upper()
# แปลงหน้าไพ่
m = {
    'A': 'ace',
    'J': 'jack',
    'Q': 'queen',
    'K': 'king'
}
val = m.get(val, val)  # ถ้าไม่ใช่ A J Q K ให้ใช้เลขเดิม

# แปลงดอกไพ่
n = {
    'D': 'diamonds',
    'H': 'hearts',
    'S': 'spades',
    'C': 'clubs'
}
ty = n.get(ty, ty)
# แสดงผล
print(f"{val} of {ty}")