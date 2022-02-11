n=int(input("Input a number :"))
n1=n
n2=n
s=0
c=0

#counting number of digits
while (n2!=0):
    c+=1
    n2=n2//10
    
while (n1!=0):
    d=n1%10
    s=s+(d**c)
    n1=n1//10
    
if (n==s):
    print("The number is armstrong")
else:
    print("The number is not Armstrong")

