# https://edabit.com/challenge/HYjQKDXFfeppcWmLX

def is_curzon(num):
	first = 2 ** num + 1
	second = 2 * num + 1
	return (first % second) == 0


# I learned that python also has lambda function!
# solution from Deep Xavier
# https://edabit.com/user/a777e8chPvJkY3tKa
is_curzon = lambda n: not ((1 << n) + 1) % (2 * n + 1)
