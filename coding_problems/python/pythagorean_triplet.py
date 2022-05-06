# https://edabit.com/challenge/Ns4Sjh7KK58ofAph8

def is_triplet(n1, n2, n3):
	squares = [n1**2, n2**2, n3**2]
	squares.sort()
	return squares[2] == (squares[0] + squares[1])
	
assert is_triplet(3, 4, 5) == True
assert is_triplet(13, 5, 12) == True
assert is_triplet(1, 2, 3) == False


# solution from afairwell2pawns
# https://edabit.com/user/Yp7uvStL97cC9fKkY
# very unfailiar to me but seems interesting
def is_triplet(*n):
    a, b, c = sorted(n)
    return a*a + b*b == c*c
