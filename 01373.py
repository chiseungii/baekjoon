def Two2Eight(s):
    if s == '0' or s == '00' or s == '000':
        return '0'
    elif s == '1' or s == '01' or s == '001':
        return '1'
    elif s == '10' or s == '010':
        return '2'
    elif s == '11' or s == '011':
        return '3'
    elif s == '100':
        return '4'
    elif s == '101':
        return '5'
    elif s == '110':
        return '6'
    elif s == '111':
        return '7'
    else:
        return ''

two = input()

index = len(two) % 3
sub = two[0:index]
result = Two2Eight(sub)
while index < len(two):
    sub = two[index:index+3]
    result += Two2Eight(sub)
    index += 3

print(result)
