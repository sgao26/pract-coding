# example problem: https://edabit.com/challenge/cToBLderwJrpqML8w

def champions(teams):
    return max(teams, key=lambda x: (x['wins'] * 3 + x['draws'],
                                     x['scored'] - x['conceded']))['name']

# in this lambda function, the list of dicts is passed in first, 
# which will compare all dicts in the list

# the key=lambda x part means each dict or team is represented by x

# the next part is the sorting criteria, of which there are two parts:
# the two criteria for sorting are passed in a tuple
# first part of tuple is primary criteria (points), 
# and second is the secondary criteria (scoring differential),
# secondary will only be used if the first part shows two teams have same points
# final part returns the name of the team that wins based on criteria
