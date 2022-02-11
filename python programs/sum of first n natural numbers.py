n=int(input("Enter N "))
i=1
s=0

if n<0:
    print("The N value is Invalid")
else:
    print("The value of N is Valid")
    while (i<=n):
        s=s+i
        i+=1
    
    print("The sum of first",n," natural numbers is =",s)
    
