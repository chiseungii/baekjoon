dot = [4]
for i in range(1, int(input()) + 1):
    block = pow(2, i - 1)
    plus_dot = block ** 2 + block * (block + 1) * 2
    dot.append(dot[i - 1] + plus_dot)

print(dot[-1])
