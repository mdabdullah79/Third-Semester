def Flaten(list1):
    flaten = []
    for i in list1:
        if isinstance(i,list):
            flaten.extend(i)
        else:
            flaten.append(i)
    return flaten

list1 = [12,15,[12,25,14,18],25,26,[80,90]]

print(Flaten(list1))