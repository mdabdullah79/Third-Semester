# def Sum(n):
#     return n*(n+1)/2

def Sum(s,e):
    sum = 0
    for i in range(s,e+1):
        sum+=i
    return sum


print(Sum(1,3))