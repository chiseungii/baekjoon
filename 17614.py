N = int(input())

s = ""
for i in range(1, N + 1):
    s += str(i)

clap = s.count('3')
clap += s.count('6')
clap += s.count('9')
print(clap)
