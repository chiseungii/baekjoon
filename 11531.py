logs = {}
cnt = 0; penalty = 0
while 1:
    s = input()
    if s[:2] == '-1': break

    m, name, correct = s.split()
    m = int(m)

    if correct == 'right':
        cnt += 1
        if name in logs:
            penalty += m + logs[name] * 20
        else:
            penalty += m
    else:
        if name in logs:
            logs[name] += 1
        else:
            logs[name] = 1

print(cnt, penalty)
