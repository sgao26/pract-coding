# edabit: very hard
# https://edabit.com/challenge/xbjDMxzpFcsAWKp97

def can_see_stage(seats):
    can_see = True
    temp = seats[0]
    for row in range(1,len(seats)):
        for x in range(len(seats[row])):
            if seats[row][x] <= temp[x]:
                can_see = False
        temp = seats[row]
    return can_see

# testing
print(can_see_stage([
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9]
]))  # True

print(can_see_stage([
  [0, 0, 0],
  [1, 1, 1],
  [2, 2, 2]
]))  # True

print(can_see_stage([
  [2, 0, 0], 
  [1, 1, 1], 
  [2, 2, 2]
]))  # False

print(can_see_stage([
  [1, 0, 0],
  [1, 1, 1],
  [2, 2, 2]
]))  # False