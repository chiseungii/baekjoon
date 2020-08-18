import sys

for line in sys.stdin:
    if int(line) % 6: print("N")
    else: print("Y")
