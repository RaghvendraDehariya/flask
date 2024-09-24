"""lof=[]

f1=input("Enter fruite name:")
lof.append(f1)
f2=input("Enter fruite name:")
lof.append(f2)
f3=input("Enter fruite name:")
lof.append(f3)
f4=input("Enter fruite name:")
lof.append(f4)
f5=input("Enter fruite name:")
lof.append(f5)
f6=input("Enter fruite name:")
lof.append(f6)
f7=input("Enter fruite name:")
lof.append(f7)

print(lof)"""

mark1=int(input("Enter the mark:"))
mark2=int(input("Enter the mark:"))
mark3=int(input("Enter the mark:"))


total_persentage=(100*(mark1+mark2+mark3))/300


if(total_persentage>=40):
    print("Your pass")
elif(mark1>=33 and mark2>=33 and mark3>=33):
    print("Your pass")
else:
    print("You fail")
        
print(type(mark1))
