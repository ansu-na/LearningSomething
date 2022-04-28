# https://edabit.com/challenge/iP4ixkQffELyHvHi5

import math

def weight(r, h):
    return round(pow(r, 2) * math.pi * h / 1000, 2)

print("test starts")
assert weight(4, 10) == 0.5
assert weight(30, 60) == 169.65
assert weight(15, 10) == 7.07
print("test ends")
