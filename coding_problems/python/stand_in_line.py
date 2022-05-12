# https://edabit.com/challenge/S26tvW7BPrJsyJApt

def next_in_line(lst, num):
	if len(lst) == 0:
		return "No list has been selected"
	lst.pop(0)
	lst.append(num)
	return lst

# solution from zatoichi49
# https://edabit.com/user/tAF9Gf6PiGogbZuWs
def next_in_line(lst, num):
	return lst[1:] + [num] if lst else "No list has been selected"
