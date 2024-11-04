def Palindrome_Cheque(n):
    s = str(n)
    s = s.replace(' ','').lower()
    return s == n[::-1]

a = input("Enter: ")
print(Palindrome_Cheque(a))