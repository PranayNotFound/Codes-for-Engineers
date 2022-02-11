ch=input()
a=['a','e','i','o','u','A','E','I','O',"U"]
if ch.isalpha():
    if ch in a:
        if ch.isupper():
            print(ch,"is an Alphabet, and it is a Vowel, and it is in Uppercase.")
        else:
            print(ch,"is an Alphabet, and it is a Vowel, and it is in Lowercase.")
    else:
        if ch.isupper():
            print(ch,"is an Alphabet, and it is a Consonant, and it is in Uppercase.")
        else:
            print(ch,"is an Alphabet, and it is a Consonant, and it is in Lowercase.")
elif ch.isdigit():
    print(ch,"is a Number")
else:
    print(ch,"is a Special Character")