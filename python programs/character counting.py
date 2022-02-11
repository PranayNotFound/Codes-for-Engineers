n=input("Enter a string: ")
d=0
a=0
u=0
l=0
v=0
c=0
s=0
vwl=["a","e","i","o","u","A","E","I","O","U"]
for i in n:
    if i.isdigit():
        d+=1
    elif i.isalpha():
        a+=1
        if i.isupper():
            u+=1
        elif i.islower():
            l+=1
        if i in vwl:
            v+=1
        else:
            c+=1
    else:
        s+=1
     
        
    
print("The number of digits =",d,"\nThe number of letters =",a,"\nThe Number of upper and lower case respectively is =",u,l,"\nThe number of vowels is =",v,"\nThe number of consonants is =",c,"\nThe number of special character is =",s)            
            
        