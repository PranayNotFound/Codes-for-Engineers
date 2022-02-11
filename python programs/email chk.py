import re
st=input()
x=re.findall(".+[@].+[.][a-z]{3}",st)

if x:
    print("Valid")
else:
    print("Invalid")