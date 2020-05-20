a = int(input())
door = int(input())

if a >= 6:
    print("Love is open door")
else:
    for i in range(1, a):
        door = not door
        print(int(door))
