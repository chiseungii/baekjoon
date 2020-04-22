trip = 1
while True:
    diameter, rotation, sec = input().split()
    if rotation == '0':
        break

    diameter = float(diameter)
    rotation = int(rotation)
    sec = float(sec)

    miles = diameter / 12 / 5280 * 3.1415927 * rotation
    MPH = miles / sec * 3600

    print('Trip #%d: %.2f %.2f' % (trip, miles, MPH))
    trip += 1
