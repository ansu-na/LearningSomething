# https://edabit.com/challenge/ZdnwC3PsXPQTdTiKf

# my implementation
def calculator(num1, operator, num2):
	if operator == "+":
		return num1 + num2
	elif operator == "-":
		return num1 - num2
	elif operator == '*':
		return num1 * num2
	elif operator == '/':
		if num2 == 0:
			return "Can't divide by 0!"
		else:
			return num1 / num2
	else:
		return "operator should be +, -, *, /"
  
# better one from Donnamae
# https://edabit.com/user/yZvzB3qFb8pkHy4dg
def calculator_better(n1, operator, n2):
	try: 
		return eval(str(n1)+operator+str(n2))
	except ZeroDivisionError:
		return "Can't divide by 0!"

# I learned eval of python!
