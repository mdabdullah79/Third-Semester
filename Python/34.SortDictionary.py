# def SortDictionary(dic1):
    


dic1 = {'Physics':99,
        'Chemitry': 98,
        'Math': 100

        
        }

sort = dict(sorted(dic1.items(),key = lambda ite: ite[1]))
print(sort)