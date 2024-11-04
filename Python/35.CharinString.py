
def countChar(s):
    s = str(s)
    s = s.upper()
    ctchar = {}
    for i in s:
        if i != ' ':
            if i in ctchar:
                ctchar[i]+=1
            else:
                ctchar[i] = 1
    return ctchar


s = input("Enter a String: ")
CountChar = countChar(s)

for char,ct in CountChar.items():
    print(f"{char}:{ct}",end="||")
    