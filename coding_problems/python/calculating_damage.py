# https://edabit.com/challenge/HSHHkdRYXfgfZSqri

def damage(damage, speed, time):
    if damage < 0 or speed < 0 :
        return "invalid"

    if time == "second" :
        return damage * speed
    elif time == "minute" :
        return damage * speed * 60
    elif time == "hour" :
        return damage * speed * 3600
    else :
        return "invalid"
	
assert damage(40, 5, "second") == 200
assert damage(100, 1, "minute") == 6000
assert damage(2, 100, "hour") == 720000
assert damage(-1, 1, "hour") == "invalid"
assert damage(1, -1, "hour") == "invalid"
assert damage(1, 1, "invalid") == "invalid"

# solution from Luis Pereira
# https://edabit.com/user/aEm3Wvj2rFYRL8Lrb
# used dict and ternary operator
def damage_sol(damage, speed, time):
	secs = {'second':1, 'minute':60, 'hour':3600}
	ans = damage*speed*secs[time]
	return ans if ans>0 and speed>0 else 'invalid'
