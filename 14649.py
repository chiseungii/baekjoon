BLUE = 0; RED = 1; GREEN = 2
bridges = [BLUE] * 101

class Son:
    def __init__(self, pos, dir):
        self.pos = pos
        self.dir = dir

    def move(self):
        if self.dir == 'R':
            self.pos += 1
            if self.pos > 100:
                return
        else:
            self.pos -= 1
            if self.pos < 1:
                return

        bridges[self.pos] += 1
        bridges[self.pos] %= 3

    def isFinish(self):
        if self.pos > 100 or self.pos < 1:
            return True
        else:
            return False

P = int(input())
N = int(input())

S = []
for i in range(N):
    p, d = input().split()
    S.append(Son(int(p), d))

while 1:
    allFinish = True
    for i in range(len(S)):
        if not S[i].isFinish():
            allFinish = False
            S[i].move()

    if allFinish:
        break

blue = red = green = 0
for i in range(1, 101):
    if bridges[i] == BLUE: blue += 1
    elif bridges[i] == RED: red += 1
    else: green += 1

son1 = P / 100 * blue
son2 = P / 100 * red
son3 = P / 100 * green

print("%.2f" % son1)
print("%.2f" % son2)
print("%.2f" % son3)
