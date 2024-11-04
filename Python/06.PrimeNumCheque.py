
def Prime(a):
    flag = 0
    for i in range(2,a):
        if a%i==0:
            flag = 1
            break
    if flag==0:
        print("The number is Prime")
    else:
        print("The number is not Prime")

a = int(input("Enter a number: "))
Prime(a)