# https://edabit.com/challenge/i6hY9JSjQK4jcaB6i

def color_invert(rgb):
	return (255 - rgb[0], 255 - rgb[1], 255 - rgb[2])

# solution from Evgeny SH
# https://edabit.com/user/8PwfYqoDQFThzNtvf

def color_invert_sol(rgb):
    return tuple(255 - c for c in rgb)
