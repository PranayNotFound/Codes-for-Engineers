import re
n=input("Enter a mobile number")
x=re.search("[1-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9]",n)
if x:
    print("Valid")
else:
    print("Not valid")
    
x1=re.search(r"^D9)