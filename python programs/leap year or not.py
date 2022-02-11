n=int(input("Enter an year "))

if n%4==0:
    if n%100==0:
        if n%400==0:
            print("The year",n,"is a leap year.")
        else:
            print("The year",n,"is not a leap year.")
    else:
        print("The year",n,"is a leap year.")
else:
    print("The year",n,"is not a leap year.")