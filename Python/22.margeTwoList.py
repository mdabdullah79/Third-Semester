
def MargeList(list1,list2):
    return list1+list2


list1 = list(map(int,input("Enter the First list one: " ).split()))
list2 = list(map(int,input("Enter the Second list: ").split()))


print(MargeList(list1,list2))