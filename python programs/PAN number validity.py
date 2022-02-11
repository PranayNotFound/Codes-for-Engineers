x=input("Enter the pan no")
import re
y=re.findall("[A-Z]{5}[0-9]{4}[A-Z]{1}",x)
print(y)
if y:
    print("Valid")
else:
    print("Invalid")