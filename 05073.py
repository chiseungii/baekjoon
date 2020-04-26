while True:
    triangle = list(map(int, input().split()))
    if sum(triangle) == 0:
        break

    triangle = sorted(triangle)
    if triangle[2] >= triangle[0] + triangle[1]:
        print("Invalid")
    else:
        if triangle[0] == triangle[1] and triangle[0] == triangle[2]:
            print("Equilateral")
        elif triangle[0] == triangle[1] or triangle[1] == triangle[2]:
            print("Isosceles")
        else:
            print("Scalene")
