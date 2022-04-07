# https://edabit.com/challenge/8pDH2SRutPoaQghgc
# I used dict and format to solve the problem
# And I'm realy happy to see that most voted solution seems same with my one!

def relation_to_luke(name):
    relations = {"Darth Vader" : "father",
    "Leia" : "sister",
    "Han" :	"brother in law",
    "R2D2" : "droid" };
    return "Luke, I am your {0}.".format(relations[name]);
