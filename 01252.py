a, b = map(int, input().split())

a = str(a); b = str(b)

if len(a) >= len(b): up = a; down = b
else: up = b; down = a

length = len(down)
up_index = len(up) - 1
down_index = len(down) - 1

carry = 0; result = ""
for i in range(length):
    tmp = int(up[up_index]) + int(down[down_index]) + carry

    carry = tmp // 2
    result = str(tmp % 2) + result

    up_index -= 1
    down_index -= 1

while up_index >= 0:
    tmp = int(up[up_index]) + carry

    carry = tmp // 2
    result = str(tmp % 2) + result

    up_index -= 1

if carry: result = str(carry) + result

print(result)
