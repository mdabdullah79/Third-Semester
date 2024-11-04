def Gcd(a,b):
    while b:
        a,b = b,a%b
    return a

def Lcm(a,b):
    return (a*b)/Gcd(a,b)

print(Gcd(4,55))
print(Lcm(4,55))


