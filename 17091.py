hour = ["one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "one"]
min = ["one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
       "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
       "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine"]

h = int(input())
m = int(input())

if m == 0: print(hour[h - 1], "o' clock")
elif m == 30: print("half past", hour[h - 1])
elif m == 15: print("quarter past", hour[h - 1])
elif m == 45: print("quarter to", hour[h])
elif m == 1: print("one minute past", hour[h - 1])
elif m == 59: print("one minute to", hour[h])
elif m < 30: print(min[m - 1], "minutes past", hour[h - 1])
else: print(min[59 - m], "minutes to", hour[h])
