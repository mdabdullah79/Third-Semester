def Desending(list1):
    list1.sort()
    return list1
def Asending(list1):
    list1.sort(reverse=True)
    return list1

list1 = list(map(int,input("Enter the list: ").split()))

print(Desending(list1))
print(Asending(list1))