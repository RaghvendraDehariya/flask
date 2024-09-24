from cs50 import SQL

db = SQL("sqlite:///favorites.db")

favorite = input("Favorite: ")

rows = db.execute("SELECT count(*) AS n FROM favorites WHERE problem = ?",favorite)

row = rows[0]

print(row['n'])


'''for row in rows:
    print(row["Id"],' | ',row["problem"],' | ',row["language"])


'''

