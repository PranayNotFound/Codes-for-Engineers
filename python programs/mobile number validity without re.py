x=input("Enter a mob no: ")
c=0
if x[0]=='0':
    c=1
if x.isdigit():
    if len(x) != 10:
        c=1
else:
    c=1
    
if c==1:
    print("Mobile number not valid")
else:
    print("Valid")