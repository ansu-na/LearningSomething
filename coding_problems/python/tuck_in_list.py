# https://edabit.com/challenge/YK9fWNBbRJ9PEc4wR

def tuck_in(lst1, lst2):
	lst2.insert(0, lst1[0])
	lst2.append(lst1[1])
	return lst2

print("test starts")
assert tuck_in([1, 10], [2, 3, 4, 5, 6, 7, 8, 9]) == [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

assert tuck_in([15,150], [45, 75, 35]) == [15, 45, 75, 35, 150]
assert tuck_in([[1, 2], [5, 6]], [[3, 4]]) == [[1, 2], [3, 4], [5, 6]]
print("test ends")

# solution from andre132
# https://edabit.com/user/TPhfpB5tzQWSSn67n
def tuck_in_sol(lst1, lst2):
    return lst1[:1] + lst2 + lst1[-1:]
