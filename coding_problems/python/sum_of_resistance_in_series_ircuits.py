# https://edabit.com/challenge/gzmFeaXwFv8X6pBGq

def series_resistance(lst):
	total = sum(lst)
	if total <= 1:
		return str(total) + " ohm"
	else:
		return str(total) + " ohms"

print("test starts")
assert series_resistance([0.3]) == "0.3 ohm"
assert series_resistance([1]) == "1 ohm"
assert series_resistance([1, 1]) == "2 ohms"
assert series_resistance([0.5, 0.8]) == "1.3 ohms"
print("test ends")


# I forgot to use format again... :(
# Solution from afairwell2pawns looks good!
# https://edabit.com/user/Yp7uvStL97cC9fKkY

def series_resistance_solution(lst):
	total = sum(lst)
	return '{} ohm{}'.format(total, 's' * (total > 1))
