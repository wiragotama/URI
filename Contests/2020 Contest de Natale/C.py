import sys
from operator import itemgetter, attrgetter
from functools import cmp_to_key

def comparator(obj1, obj2):
    """
    To compare which one between obj1 and obj2 should comes first in sorting
    
    Args:
        obj1: the first object (can be a plain variable)
        obj2: the second object (can be a plain variable)
    
    Returns:
        bool (True if obj1 should come before obj2)
    """
    if obj1[1] > obj2[1]:
        return True
    elif obj1[1] == obj2[1]:
        if obj1[0] < obj2[0]:
            return True
        else:
            return False
    else:
        return False


def merge_sort(arr): 
    """
    Merge sort the input list (array)

    Args:
        arr (list): input list

    Returns:
        sorted input
    """
    if len(arr)>1: 
        mid = len(arr)//2
        left = arr[:mid] 
        right = arr[mid:] 
        left = merge_sort(left) 
        right = merge_sort(right) 

        outval =[] # return variable

        while len(left)>0 and len(right)>0: 
            if comparator(left[0], right[0]): 
                outval.append(left[0]) 
                left.pop(0) 
            else: 
                outval.append(right[0]) 
                right.pop(0) 

        # put the remaining elements into the outval (if exist)
        for i in left: 
            outval.append(i) 
        for i in right: 
            outval.append(i) 
      
        return outval
    else:
        return arr


n = int(input())
people = []
for i in range(n):
    name, age = input().split(" ")
    age = int(age)
    people.append((name, age))
people = merge_sort(people)

# initializing number of teams
n_teams = n // 3
teams = []
for i in range(n_teams):
    teams.append([])

# putting leader to teams
start = 0
end = n // 3
for i in range(start, end):
    teams[i].append(people[i])

# delivery man
start = end
end += n // 3
for i in range(start, end):
    teams[i % n_teams].append(people[i])

# driver
start = end
end += n // 3
for i in range(start, end):
    teams[i % n_teams].append(people[i])

for i in range(n_teams):
    print("Time", i+1)
    for j in range(len(teams[i])):
        print(teams[i][j][0], teams[i][j][1])
    print()
