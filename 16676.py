N_str = input()
N = int(N_str)

make = ""
for i in range(len(N_str) - 1):
    make += '1'
make += '0'
cmp = int(make)

if N == 0: print(1)
elif N > cmp: print(len(N_str))
else: print(len(N_str) - 1)
