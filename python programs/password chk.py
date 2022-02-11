import re
st=input()
f1=0
f2=0
f3=0
f4=0
f5=0

if len(st)<=12 and len(st)>=6:
    f1=1
    
if re.search("[0-9]+",st):
    f2=1
    
if re.search("[a-z]+",st):
    f3=1
    
if re.search("[A-Z]+",st):
    f4=1
   
if re.search("[$#@]+",st):
    f5=1
    
if f1==1 and f2==1 and f3==1 and f4==1 and f5==1:
    print("The password",st,"is Valid")

if f1==0:
    print("Password is invalid: Must be of 6-12 characters length")
if f2==0:
    print("Password is invalid: Must contain at least one numeric value")
if f3==0:
    print("Password is invalid: Must contain at least one lowercase letter")
if f4==0:
    print("Password is invalid: Must contain at least one uppercase letter")
if f5==0:
    print("Password is invalid: Must contain at least one of $,#,@ character")
    
    