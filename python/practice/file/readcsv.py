import csv

with open ("favorites.csv","r")as file:
    reader = csv.DictReader(file)

    count = {} 

    for row in reader:
        favorite = row["language"]

        if favorite in count:
            count[favorite]+=1

        else:
            count[favorite]=1
            

'''for i in sorted(count ,reverse=False):
    print(f"{i} : {count[i]}")
'''

fav = input("Search your favorite language: ")

if fav in count:
    print(f"{fav} : {count[fav]}")
