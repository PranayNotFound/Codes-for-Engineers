d=input()
dt=int(d[0]+d[1])
mn=int(d[3]+d[4])
yr=int(d[6:])
f=0
lpf=0

if yr%4==0:
    if yr%100==0 and yr%400==0:
        lpf=1
    if yr%100!=0:
        lpf=1
        
        
if lpf==0:
    if mn in [1,3,5,7,8,10,12]:
        if dt>31:
            f=1
    if mn in [4,6,9,11]:
        if dt>30:
            f=1
    if mn==2:
        if dt>28:
            f=1
else:
    if mn in [1,3,5,7,8,10,12]:
        if dt>31:
            f=1
    if mn in [4,6,9,11]:
        if dt>30:
            f=1
    if mn==2:
        if dt>29:
            f=1

if f==0:
    print(d,"is a valid date.")
