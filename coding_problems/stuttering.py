word = "what"

# before learn formating
repeat = word[0:2]
print(repeat + "... " + repeat + "... " + word + "?")

# using formating from zatoichi49
# https://edabit.com/user/tAF9Gf6PiGogbZuWs
print('{0}... {0}... {1}?'.format(word[:2], word))
