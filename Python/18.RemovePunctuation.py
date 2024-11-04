import string

def RemovePunciation(s):
    trans = s.maketrans('','',string.punctuation)
    s = s.translate(trans)
    return s

s = input("Enter a String: ")
print(RemovePunciation(s))