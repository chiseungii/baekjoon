A, B = map(int, input().split())
if A > B:
    A, B = B, A
    
if A < 0 and B > 0:
    if abs(A) == B:
        start = 0
        end = 0
    elif abs(A) > B:
        start = A
        end = -B - 1
    else:
        start = abs(A) + 1
        end = B
        
    res = (end - start + 1) * (start + end) // 2
else:
    res = (B - A + 1) * (A + B) // 2
    
print(res)
