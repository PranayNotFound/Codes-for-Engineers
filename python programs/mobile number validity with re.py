import re
st=input()

y=re.findall("[1-9][0-9]{9}",st)
print(y)
if y:
    print("valid")
else:
    print("invalid")
    
    
