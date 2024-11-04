import math

def Area(x,y,z):
    s = (x+y+z)/2
    area = math.sqrt(s*(s-a)*(s-b)*(s-c))
    return area

a = int(input("Enter the First Side of Triangle: "))
b = int(input("Enter the Second Side of Triangle: "))
c = int(input("Enter the Third Side of Triangle: "))

result = Area(a,b,c)
print(f"The area of Triangular is: {result}")