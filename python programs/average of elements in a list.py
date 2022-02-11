n=int(input())
lt=[]
s=0
for i in range(1,n+1):
    k=int(input())
    lt.append(k)

for i in range(0,n):
    s=s+lt[i]
print("Average of elements in the list",s/n)