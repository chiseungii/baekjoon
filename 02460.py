people = 0
num_people = list()
for i in range(10):
    off, on = map(int, input().split())

    people -= off
    people += on
    num_people.append(people)

print(max(num_people))
