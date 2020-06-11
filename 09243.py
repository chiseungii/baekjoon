N = int(input())
before = input()
after = input()

wrong = False
if N % 2:
    for i in range(len(before)):
        if before[i] == after[i]:
            print("Deletion failed")
            wrong = True
            break
else:
    for i in range(len(before)):
        if before[i] != after[i]:
            print("Deletion failed")
            wrong = True
            break

if not wrong: print("Deletion succeeded")
