#https://edabit.com/challenge/2hsyXkzDRewGSPpPE

def binary(decimal):
	if decimal == 0:
		return "0"
	result = ""
	while decimal > 0:
		if decimal % 2 == 0:
			result = "0" + result;
		else:
			result = "1" + result;
		decimal = int(decimal / 2)
	return result


# Solution from lawtonsack
# https://edabit.com/user/qcbdDGrrf5HzPLRvQ
# utilize format!

def binary_solution(decimal):
	return "{0:b}".format(decimal)
