N = int(input())

sum = 0
for i in range(N):
    sum += int(input())

if sum > N // 2:
    print("Junhee is cute!")
else:
    print("Junhee is not cute!")
