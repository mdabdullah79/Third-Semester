

def IntersectioSet(set1,set2):
    set1 = set1.intersection(set2)
    return set1

set1 = set(map(int,input("Enter the set1: ").split()))
set2 = set(map(int,input("Enter the set2: ").split()))

print(IntersectioSet(set1,set2))