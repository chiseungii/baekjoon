n = int(input())
stair = 1; blocks = 1; plus_block = 1; base = 4
while n > blocks:
    stair += 1
    blocks += (plus_block + base)
    plus_block += base
    base += 4
    
if n == blocks:
    print(stair)
else:
    print(stair - 1)
