a=int(input())
b=int(input())
ch=input()

if ch=="+":
    s=a+b
    print(a,"+",b"=",s)
elif ch=="-":
    s=a-b
    print(a,"-",b"=",s)
elif ch=="*":
    s=a*b
    print(a,"*",b"=",s)
elif ch=="/":
    s=a//b
    print(a,"/",b"=",s)
else:
    print("Wrong choice inputted!")
