# https://edabit.com/challenge/ZCaMMqDuJBi6NZgYF

def temp_conversion(celsius):
	inF = round(celsius * 9 / 5 + 32, 2)
	inK = round(celsius + 273.15, 2)
	if inK < 0:
		return "Invalid"
	else:
		return [inF, inK]
