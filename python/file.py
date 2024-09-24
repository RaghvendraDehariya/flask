'''f=open("file1.txt","w")

s="Dear sir thank you for greate education"

f.write(s)

f.close()
'''
'''
f=open("file1.txt","a")

s="\nDear sir thank you for greate education"

f.write(s)

f.close()
'''

f=open("file1.txt")

#line=f.readlines()

line=f.readline()

while(line != ""):
    print(line,type(line))
    line=f.readline()
    

f.close()
