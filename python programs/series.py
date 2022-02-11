import math
n=int(input())

'''s=0
for i in range(1,n+1):
    s=s+(1/i)

#print("The sum of series is =",format(s,"0.4f"))

x=float(input("Enter the value of x :"))
s1=0
for i in range(1,n+1):
    s1=s1+((x**i)/i)
    
#print("The sum of series is =",format(s1,"0.4f"))'''
    
s2=0
e=0
for i in range(0,n+1):
    e=e+ (1/math.factorial(i))

print("The sum of series is =",format(e,"0.9f"))  

    

