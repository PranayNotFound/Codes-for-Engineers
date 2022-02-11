# -*- coding: utf-8 -*-
"""
Created on Fri Oct 22 11:59:53 2021

@author: Pranay Kumar 21BEE0276
"""
        ##### Map
a=[-2, 4, 5,-4,9,-5]        
print(list(map(abs,a)))

        ##### finding in a list
        
print(10 in a)

        ##### Matrix
        
matA = [[1, 2, 3],[4,5,6],[7,8,9]]
print(matA[0])
print(matA[1])
print(matA[2])
print(matA[1][1])

        ##### Insertion and deletion
        
l=[1,2,3,4]
l[1:3]=[3,4] #deleting using []
print(l)

l=[1]
l[:0]=[2,3,4]
print(l)
#insert all but at :0, an empty slice at front
l=[1]
l[len(l):]=[2,3,4]
print(l)

        ##### Append and sort
        
a=[6,87,6,8,9]
a.append(120)
print(a)

a.sort(reverse=True)
print(a)

        ##### Extend
        
a=[6,87,6,8,9]
b=[3,5,4,7,1]
a.extend(b) #or a=a+b
print(a)
        
        ##### Pop

a=[6,87,6,8,9]
print(a.pop())
print(a)

        ##### Reverse
        
a=[6,87,6,8,9]

print(list(reversed(a)))
     
a.reverse()
print(a)

print(list(reversed(a)))

        ##### index insert and remove
        
a=[6,87,6,8,9]
print(a.index(87))

a.insert(2,500)
print(a)

#a.remove(6)
print(a)

print(a.count(6))

del(a[4])
print(a)

# -*- coding: utf-8 -*-
"""
Created on Fri Oct 22 12:05:36 2021

@author: Pranay Kumar 21BEE0276
"""
# Using Split

st=input("Enter the list elements separated by space : ")
list = st.split() #perimeter left blank cuz default separator is space
print("list",list)

# Using Append

lt=[]
n=int(input("Enter the size of the list"))
for i in range(0,n):
    lt.append(float(input()))
print(lt)

# Using List comprehension

lt=[]
n=int(input("Enter the size of the list"))
#lt.append(float(input()) for i in range(n))
#list=[float(input()) for i in range(n)]
print(list)

list2 =list(int(num) for num in input("Enter list nums sep by spaec ".strip().split())[:n])


