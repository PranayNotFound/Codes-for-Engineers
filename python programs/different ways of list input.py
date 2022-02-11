# -*- coding: utf-8 -*-
"""
Created on Fri Oct 22 12:05:36 2021

@author: Pranay Kumar
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