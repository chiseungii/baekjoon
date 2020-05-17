CORRECT = 0; WRONG_SAMPLE = 1; WRONG_SYSTEM = 2
S1, S2 = map(int, input().split())

result = CORRECT
for i in range(S1):
    a, b = map(int, input().split())
    if a != b: result = WRONG_SAMPLE

if result == CORRECT:
    for i in range(S2):
        a, b = map(int, input().split())
        if a != b: result = WRONG_SYSTEM

if result == CORRECT:
    print("Accepted")
elif result == WRONG_SAMPLE:
    print("Wrong Answer")
else:
    print("Why Wrong!!!")
