def SecondLarge(list1):
    list1.sort(reverse=True)
    return list1[1]


list1 = list(map(int,input("Enter the list: ").split()))
print(SecondLarge(list1))