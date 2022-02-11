import math
n=int(input("Enter a number:"))
if (n>0):
        n1=n
        s=0
        while (n1!=0):
            d=n1%10
            s=s+math.factorial(d)
            n1=n1//10
        
        if (s==n):
            print("The number",n,"is a strong number")
        else:
            print("The number",n,"is not a strong number")
        
else:
        print("The number is invalid")