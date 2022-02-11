n=int(input("Input a number :"))
n1=n
s=0
while (n1!=0):
    d=n1%10
    s=s*10+d
    n1=n1//10

print("The reversed number of",n,"is =",s)
if s==n:
    print("The number",n,"is a palindrome")
else:
    print("The number",n,"is not a palindrome")
    


