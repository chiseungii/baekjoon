def print_box(n):
    if n == 1:
        print('#')
        return

    print('#' * n)
    for i in range(n - 2):
        print('#', 'J' * (n - 2), '#', sep='')
    print('#' * n)

t = int(input())
n = int(input())
print_box(n)
for i in range(1, t):
    n = int(input())
    print()
    print_box(n)
