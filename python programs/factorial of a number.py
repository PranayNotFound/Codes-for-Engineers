'''n=int(input("Enter a number:"))
if (n>0):
    n1=n
    s=1
    while (n1!=0):
        s=s*n1
        n1=n1-1
    print("The factorial of the number",n,"is =",s)
else:
    print("The number is invalid")'''
    
import math
n=int(input("Enter a number:"))
if (n>0):
    print("The factorial of the number",n,"is =",math.factorial(n))
else:
    print("The number is invalid")