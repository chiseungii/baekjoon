cards = [i for i in range(21)]
for i in range(10):
    a, b = map(int, input().split())

    for j in range((b - a) // 2 + 1):
        cards[a + j], cards[b - j] = cards[b - j], cards[a + j]

for card in cards[1:]:
    print(card, end=' ')
print()
