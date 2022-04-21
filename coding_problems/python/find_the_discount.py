# https://edabit.com/challenge/c

# calculate discounted price, with rounded two decimal places
# I learned round()!
def dis(price, discount):
	return round(price * (1 - (discount / 100)), 2)

