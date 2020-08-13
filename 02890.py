R, C = map(int, input().split())

results = []
for i in range(R):
    lane = input()

    for j in range(len(lane)):
        if lane[j].isdigit():
            num = int(lane[j])
            results.append([num, j])

            break
results = sorted(results, key=lambda x: -x[1])

prints = []
rank = 0; loc = C + 1
for i in range(len(results)):
    if results[i][1] == loc:
        prints.append([results[i][0], rank])
    else:
        rank += 1; loc = results[i][1]
        prints.append([results[i][0], rank])
prints = sorted(prints, key=lambda x: x[0])

for p in prints:
    print(p[1])
