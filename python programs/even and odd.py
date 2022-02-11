#input
r1=int(input("Enter the lower limit of the range :"))
r2=int(input("Enter the upper limit of the range :\n"))

#initialisation
lte=[]
lto=[]

#working
for i in range(r1,r2+1):
    if i%2==0:
        lte.append(i)
    else:
        lto.append(i)

#output
print("The list of even numbers is ",lte,"\n\n")
print("The list of odd numbers is ",lto)

