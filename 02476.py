N = int(input())

max_price = 0
for i in range(N):
    a, b, c = map(int, input().split())
    
    if a == b and a == c:
        price = 10000 + a * 1000
    elif a == b and a != c:
        price = 1000 + a * 100
    elif a == c and a != b:
        price = 1000 + a * 100
    elif b == c and a != b:
        price = 1000 + b * 100
    else:
        price = max(a, b, c) * 100
        
    max_price = max(max_price, price)
    
print(max_price)
