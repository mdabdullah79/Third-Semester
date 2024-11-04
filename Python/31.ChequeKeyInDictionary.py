def keyexistinDictionary(dict,key):
    if key in dict:
        return True
    else:
        return False


dictionary = {'name':'Abdullah','Age':12}
key = input("Enter the key to find")
print(keyexistinDictionary(dictionary,key))