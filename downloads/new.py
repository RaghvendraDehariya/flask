import random as r
import math

# creat a list

list1=list(range(8,100,8))

print(list1)
# Q1- use constant

PI=3.1416
r=int(input("Enter the radius: "))
print(2*PI*r*r)


# Q2- negetive number

'''
neg=int(input("Enter the negtive: "))
n=(pow(neg,2))/PI
print("The value is: ",n)
'''


# Q3- random integer that are divisible by 8


'''

for i in range(100):
    s=r.randint(1,20000)
    if(s%8==0):
        print(s)
'''



# Q4- 3 decimal point


'''
for i in range(10):
    s=r.uniform(1,200)
    print(round(s,3))
'''


# Q5- 10 digit telephone number


'''   
for i in range(100):
    s=r.randint(1000000000,10000000000)
        print(s)
'''
