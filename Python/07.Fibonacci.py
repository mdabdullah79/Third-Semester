def Fibinacchi(n):
    a = 0
    b = 1;
    for i in range(1,n+1):
        print(a,end=" ")
        s = b
        b = a+b
        a = s

Fibinacchi(5)