if __name__ == "__main__":
    T = int(input())

    for tc in range(T):
        n = int(input())
        clothes = {}

        for i in range(n):
            name, category = input().split()

            if category in clothes:
                clothes[category] += 1
            else:
                clothes[category] = 1

        result = 1
        for i in clothes.values():
            result *= (i + 1)

        print(result - 1)
