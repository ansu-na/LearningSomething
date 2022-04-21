# https://edabit.com/challenge/tgEWKRQD8hu5dD3pX

def mood_today(mood = "neutral"):
	return "Today, I am feeling {}".format(mood)

print("test starts")
assert mood_today() == "Today, I am feeling neutral"
assert mood_today("happy") == "Today, I am feeling happy"
print("test ends")
