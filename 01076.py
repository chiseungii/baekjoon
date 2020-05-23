R = ['black', 'brown', 'red', 'orange', 'yellow', 'green',
     'blue', 'violet', 'grey', 'white']
s1 = input(); s2 = input(); s3 = input()

index1 = R.index(s1)
index2 = R.index(s2)
index3 = R.index(s3)

result = index1 * 10 + index2
result *= 10 ** index3

print(result)
