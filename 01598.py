# 꼬리를 무는 숫자 나열

a, b = map(int, input().split())

if a % 4 == 0:
    ax = 4
    ay = a // 4 - 1
else:
    ax = a % 4
    ay = a // 4
if b % 4 == 0:
    bx = 4
    by = b // 4 - 1
else:
    bx = b % 4
    by = b // 4
    
print(abs(ax - bx) + abs(ay - by))
