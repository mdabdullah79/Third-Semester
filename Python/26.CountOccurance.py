
def CountOccurance(s):
    element ={}
    for i in s:
        if i in element:
           element[i]+=1
        else:
            element[i] = 1
    return element


s = input("Enter a String: ")
el = CountOccurance(s)
for i,j in el.items():
    print(i,":",j)
