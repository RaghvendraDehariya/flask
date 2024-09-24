with open("New.txt") as f:
    content=f.readlines()

c=1
for i in content:    
    if("python" in i):
        print(f"python present in line No. {c}")
        break
    c+=1
else:
    print(f"python is not present in file")


