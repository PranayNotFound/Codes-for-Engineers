ch=input("Enter the character ")

#if (ch>='a' and ch<='z') or (ch >= 'A' and ch<='Z'):
#    print (ch,"is an Alphabet.")
#else:
#    print (ch,"is not an Alphabet.")

a=['a','e','i','o','u','A','E','I','O',"U"]

if ch.isalpha():
    print (ch,"is an Alphabet.")
    for i in range(0,9):
#        if (ch in a[i]):
        if (ch == a[i]):
            print(ch,"is a vowel")


        

    