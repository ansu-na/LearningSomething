# https://edabit.com/challenge/NM8JbG5K2ajKjkqpj

def asc_des_none(lst, s):
    if s == "Asc":
        lst.sort()
    elif s == "Des":
        lst.sort(reverse=True)
    return lst
    
print("test starts")
assert asc_des_none([4, 3, 2, 1], "Asc") == [1, 2, 3, 4]
assert asc_des_none([7, 8, 11, 66], "Des") == [66, 11, 8, 7]
assert asc_des_none([1, 2, 3, 4], "None") == [1, 2, 3, 4]
print("test ends")
