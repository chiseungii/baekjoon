h, m, s = map(int, input().split(':'))
current_S = h * 3600 + m * 60 + s
h, m, s = map(int, input().split(':'))
start_S = h * 3600 + m * 60 + s

if current_S < start_S:
    result_S = start_S - current_S
else:
    result_S = 86400 - (current_S - start_S)

print("%02d:%02d:%02d" % (result_S // 3600,
                          result_S % 3600 // 60,
                          result_S % 60))
