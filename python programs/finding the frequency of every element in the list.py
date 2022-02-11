#INITIALISING THE LIST AND OTHER VARIABLES
lst=[1,2,3,4,4,54,64,4,2,1,4,54,6]
lst1=[]
c=0
l=len(lst)
k=0

#PUTTING UNREPEATED ELEMENTS IN A NEW LIST
for i in range(0,l):
    l2=len(lst1)
    k=0
    for j in range(0,l2):
        if lst[i]==lst1[j]:
            k=1        
    if (k==0):
        lst1.append(lst[i])
        

#COUNTING AND PRINTING THE FREQUENCY BY COMPARING THE 2 LISTS
for i in range(0,len(lst1)):
    c=0
    for j in range(0,len(lst)):
        if lst[j]==lst1[i]:
            c+=1
    print("The frequency of",lst1[i],"is",c)
        

    



    