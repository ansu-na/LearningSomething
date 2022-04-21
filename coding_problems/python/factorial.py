# https://edabit.com/challenge/FF6kYPHdAcJnoosr5
# I used for loop instead of recursive call
# I learned that range can give start and end points, and also end point would not be included!

def factorial(num):
	fact = 1
	for i in range(1, num + 1):
		fact *= i
	return fact
