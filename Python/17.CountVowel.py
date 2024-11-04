def Count_Vowel(s):
    vowel = "aeiouAEIOU"
    count = 0
    for i in s:
        if i in vowel:
            count+=1
    return count

s = input("Enter a Sentence: ")
print(f"The total is {Count_Vowel(s)}")

