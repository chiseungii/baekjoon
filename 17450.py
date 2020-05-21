Sp, Sw = map(int, input().split())
Np, Nw = map(int, input().split())
Up, Uw = map(int, input().split())

Sp *= 10; Np *= 10; Up *= 10
Sw *= 10; Nw *= 10; Uw *= 10
if Sp >= 5000: Sp -= 500
if Np >= 5000: Np -=500
if Up >= 5000: Up -=500

result = [['S', Sw / Sp]]
result.append(['N', Nw / Np])
result.append(['U', Uw / Up])
result = sorted(result, key=lambda x: -x[1])
print(result[0][0])
