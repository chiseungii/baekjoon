# 공

ball = 1
for i in range(int(input())):
    X, Y = map(int, input().split())
    
    if X == ball:
        ball = Y
    elif Y == ball:
        ball = X
        
print(ball)
