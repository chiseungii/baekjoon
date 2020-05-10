A_damage, A_life = map(int, input().split())
B_damage, B_life = map(int, input().split())

while A_life > 0 and B_life > 0:
    A_life -= B_damage
    B_life -= A_damage

if A_life <= 0 and B_life <= 0:
    print("DRAW")
elif A_life <= 0:
    print("PLAYER B")
else:
    print("PLAYER A")
