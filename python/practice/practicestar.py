n=int(input("Enter a number: "))
#2n-1
#  *
# ***
#*****
m=n
s="*"
print('\n')
for i in range(1,n+1):
    a=1
    while(a<m):
        print(" ",end="")
        a+=1
    b=0
    while(b<((2*i)-1)):
        print(s,end="")
        b+=1
    m-=1
    print("")

