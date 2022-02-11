n=input("Enter a string: ")
w=1
c=0
for i in n:
    if i==" ":
        w+=1
    c+=1
l=len(n)
a=n.split(' ')
w=len(a)
print("The number of words is =",w,"\nThe number of characters is =",l)
   
    