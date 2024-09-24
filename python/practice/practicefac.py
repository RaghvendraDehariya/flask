n=int(input("Enter a number: "))


if(n>=0):fac=1
else:fac=-1


#while(n>0):
#    fac*=n;
#     n-=1

for i in range(1,n+1):
    fac*=i


print(fac)
