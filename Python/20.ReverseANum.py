def Reverse(n):
    reverse = 0
    while n:
        a = n%10
        reverse = (reverse*10)+a
        n = n//10
    return reverse

num = int(input("Enter a Number: "))
print(Reverse(num))