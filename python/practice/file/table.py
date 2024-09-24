def tabl(n):
    table=""
    for i in range(1,13):
        table+=f"{n}X{i}={n*i}\n"
        
    with open(f"table/table{n}.txt","w") as f:
        f.write(table)


for i in range(2,21):
    tabl(i)
