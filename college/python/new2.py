#Q1 : answer
'''
list1 = [56.7,78,45.3,89,19.9,32.9,10.0,22.1,45.9,55.6]

j=1

for i in list1:
    print(f"The average of Player {j} is : {i}")
    j+=1
'''

'''
#Q2 : answer

list2 = ['computer+program', 'new+delhi', 'artificial+intelligence', 'sea+facing', 'bungalow+society','software+engineer', 'highspeed+internet', 'slow+coach', 'high+density', 'clear+weather']

for i in list2:
    if '+' in i:
        x=i.replace('+',' ')
    print(x)
'''

#Q3 : answer
'''
odd_list = []
even_list = []

for i in range(1,100):
    if i%2 == 0:
        even_list.append(i)

    else:
        odd_list.append(i)

print('even numbers:',even_list)
print('odd numbers :',odd_list)
'''

#Q4 : answer
'''
list3 = ["data", "machine", "learning","student"]
j = 0
for i in list3:
    j=list3.count(i)
    print(f"List {i} has {j} word")
'''

#Q5 : answer
'''
import random as r

list4 = []
list5 = []

for i in range(2):
    list4.append(r.randint(1,9))
    list5.append(r.randint(1,9))
for i in range(2):
    list4.append(r.randint(10,99))
    list5.append(r.randint(10,99))
for i in range(2):
    list4.append(r.randint(100,999))
    list5.append(r.randint(100,999))

print(list4)
print(list5)


for i in list4:
    for j in list5:
        if i<=9 and j<=9 and i>=1 and j>=1:
            print(i*j)
        elif i<=99 and j<=99 and i>=10 and j>=10:
            print(i*j)
        elif i<=999 and j<=999 and i>=100 and j>=100:
            print(i*j)
'''

#Q6 : answer

list6 = ['apashabi.pathan@mycompany.net','savitri.patil@myplace.in','sarita.patil@mycompany.in','shabda.singh@office.com','priya.kumar@theoffice.in','naresh.swami@wfh.co.in','ganesh.sakhare@mycompany.net']



for i in list6:
    i=i[:i.index('@')]
    if '.'in i:
        i=i.replace('.',' ')
    print(i)
    


