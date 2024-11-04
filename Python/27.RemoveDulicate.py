def RemoveDuplicate(list1):
    unique = set(list1)
    return unique

def RemoveDuplicateManually(list1):
    unique = []
    for i in list1:
        if i not in unique:
            unique.append(i)
    return unique

list1 = [12,13,12,13,50]
print(RemoveDuplicateManually(list1))