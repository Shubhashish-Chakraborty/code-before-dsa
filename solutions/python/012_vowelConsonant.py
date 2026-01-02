theStr = input("Enter the String: ")
vowels = ['a' , 'e' , 'i' , 'o' , 'u']
vowelCount = 0
consoCount = 0
for i in theStr:
    if (i.isalnum()):
        if (i in vowels):
            vowelCount += 1
        else:
            consoCount += 1
print(f"Vowels: {vowelCount} , Consonants: {consoCount}")