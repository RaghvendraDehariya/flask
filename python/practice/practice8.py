with open("New.txt")as f:
    content=f.read()

if("python" in content):
    print("Yes,python present in content")

else:
    print("No,python not present in content")

