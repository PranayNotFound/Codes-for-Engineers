# -*- coding: utf-8 -*-
"""
Created on Mon Oct 18 14:42:39 2021

@author: Pranay Kumar 21BEE0276
"""

        ##### LISTS
list1=[]
list2=[100,99.8,103,102]
list3=["hello",'a',45,23.6,"21BEE0276"]
list4=[4,32,22,5,32]
print(list1)
print(list2)
print(list3)
print(list4)


        ##### Making nested list
        
list5=[276,['Pranay Kumar','pranay.kumar2021@vitstudent.ac.in'],100,[100,'marks']]
print(list5)

        ##### Accesing and updating nested list(list indices must be integers)
        
print(list5[1][1])

list5[3][0]=99
print(list5)

        ##### Deleting list elements

del(list2[3])
print(list2)

        ##### length of list
        
print(len(list1))
print(len(list2))
print(len(list3))
print(len(list4))

        ##### combining 2 lists
        
list6=list4+list5
print(list6) 

        ##### Repetation

list9=[20]
list10=list9*10
print(list10)

        ##### converting lists

list11=str(list4)
print(list11)


        ##### Loops and other shortening things in lists
        
lst1=[c*3 for c in 'green']
print(lst1)

lst2=[]
for c in 'green':
    lst2.append(c*3)
print(lst2)

lst3=[c for c in range(1,51)]
print(lst3)
        
lst4=list(range(1,51))
print(lst4)

lst5=[c for c in range(1,51) if c%2==0]
print(lst5)

        ##### Slicing and indexing

print(lst5[4:])
print(lst5[-6:])#no need to write for 1st or last index


        ##### Types of list input
        
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