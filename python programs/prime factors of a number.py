#prime factors of an integer
n=int(input())
n1=n
j=0
c=0
for i in range(2,n):
    c=0
    if n%i==0:
        for j in range(2,i):
            if i%j==0:
               c=1
    else:
        c=1
    
    if c==0:
        print(i)
    
    
    