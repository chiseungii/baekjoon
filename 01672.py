DNA = {}
DNA['AA'] = 'A'; DNA['AG'] = 'C'; DNA['AC'] = 'A'; DNA['AT'] = 'G'
DNA['GA'] = 'C'; DNA['GG'] = 'G'; DNA['GC'] = 'T'; DNA['GT'] = 'A'
DNA['CA'] = 'A'; DNA['CG'] = 'T'; DNA['CC'] = 'C'; DNA['CT'] = 'G'
DNA['TA'] = 'G'; DNA['TG'] = 'A'; DNA['TC'] = 'G'; DNA['TT'] = 'T'

N = int(input())
s = input()

if len(s) == 1: print(s)
else:
    a = s[-2]; b = s[-1]
    b = DNA[a + b]

    for i in range(len(s) - 3, -1, -1):
        a = s[i]
        b = DNA[a + b]

    print(b)
