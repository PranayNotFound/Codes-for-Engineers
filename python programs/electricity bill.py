u=int(input())

if u>0 and u<=100:
    s=1.5*u+25
elif u>100 and u<=200:
    s=2.5*(u)+50
elif u>200 and u<=300:
    s=4*(u)+75
elif u>300 and u<=350:
    s=5*(u)+100
elif u>350:
    s=1500
    
print("The total cost for ",u,"units is =",s)