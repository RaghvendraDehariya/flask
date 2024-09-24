with open("New.txt") as f:
    content=f.read()

d={"Ram":"Sita","Krishna":"Radha","Vishnu":"Laxmi","Shiv":"Sakti"}
#print(d,type(d))

#print(list(d.keys()),list(d.values()))
for i in list(d.keys()):
    rep=input(f"{i} replace to :")
    content = content.replace(i,rep)


with open("New.txt","w") as f:
    f.write(content)



