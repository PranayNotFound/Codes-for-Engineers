n=int(input())
n=n+2
print("1  ")
for i in range(3,n):
    for k in range(1,n-i):
        print("   ",end="")
    for j in range(1,i):
        print(j,end=" ")
    print(" ")
    