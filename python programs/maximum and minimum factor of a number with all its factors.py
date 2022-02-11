n=int(input())
maxi=0
mini=n
for i in range(1,n+1):
    if n%i==0:
        if i>maxi:
            maxi=i
        if i<mini:
            mini=i
print(maxi)
print(mini)