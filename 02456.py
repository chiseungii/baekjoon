class Candidate:
    def __init__(self, n):
        self.num = n
        self.score = 0
        self.cnt = [0, 0, 0]

    def vote(self, s):
        self.score += s
        self.cnt[s - 1] += 1

    def __eq__(self, other):
        if self.score == other.score and self.cnt[2] == other.cnt[2] and self.cnt[1] == other.cnt[1]:
            return True
        else: return False

    def getScore(self):
        return self.score

    def getNum(self):
        return self.num

C = [Candidate(1), Candidate(2), Candidate(3)]
N = int(input())
for i in range(N):
    c1, c2, c3 = map(int, input().split())
    C[0].vote(c1)
    C[1].vote(c2)
    C[2].vote(c3)
C.sort(key=lambda c: (-c.score, -c.cnt[2], -c.cnt[1]))

if C[0] == C[1]: print(0, C[0].getScore())
else: print(C[0].getNum(), C[0].getScore())
