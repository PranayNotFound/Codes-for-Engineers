import re
txt="The rain in Spain"
x=re.search(r"\bS\w+",txt)
if x:
    print(x.span())
    print(x.string)
else:
    print("No match")