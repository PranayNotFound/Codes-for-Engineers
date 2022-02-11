n=int(input("Enter the value of N :"))

r1=int(input("Enter the lower limit of the range :"))
r2=int(input("Enter the upper limit of the range :\n"))

lt=[]

for i in range(r1,r2):
    if i%n==0:
        lt.append(i)
        '''print(i,end=", ")

print("are the multiples.\n")'''

print("The list of divisors",lt)
print("The list is completed.")

