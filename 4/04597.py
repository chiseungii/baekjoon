while 1:
    bit = input()
    if bit == '#': break

    cnt = bit.count('1')
    index = len(bit) - 1
    if bit[index] == 'e':
        if cnt % 2: bit = bit[:index] + '1'
        else: bit = bit[:index] + '0'
    else:
        if cnt % 2: bit = bit[:index] + '0'
        else: bit = bit[:index] + '1'

    print(bit)
