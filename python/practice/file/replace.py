def repl():
    with open("prac2.txt","r")as f:
        content=f.read()
    value=["ram","bhol","diti"]
    print(value)
    
    for item in value:
        item2=input(f"{item} = ")
        content=content.replace(item,item2)
        
    with open("prac2.txt","w")as f:
        f.write(content)


repl()





