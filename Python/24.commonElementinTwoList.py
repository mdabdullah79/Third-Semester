def CommonElement(list1,list2):
    cel = (set(list1) & set(list2))
    return cel


list1 = list(map(int,input("Enter the list1: ").split()))
list2 = list(map(int,input("Enter the list2: ").split()))
print(CommonElement(list1,list2))