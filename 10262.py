gunnar = list(map(int, input().split()))
emma = list(map(int, input().split()))
if sum(gunnar) == sum(emma):
    print("Tie")
elif sum(gunnar) > sum(emma):
    print("Gunnar")
else:
    print("Emma")
