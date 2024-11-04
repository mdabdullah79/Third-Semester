


s = input("Enter a string")

el = {}

for i in s:
    if i !=' ':
        if i in el:
            el[i]+=1
        else:
            el[i] = 1

MAX = max(el,key=el.get)
print(el)
print(MAX)