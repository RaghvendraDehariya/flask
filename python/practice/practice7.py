l=["radhe","python","pygame"]

with open("New.txt")as f:
    content=f.read()
for word in l:
    content=content.replace(word,"#"*len(word))

with open("New.txt","w")as f:
    f.write(content)

