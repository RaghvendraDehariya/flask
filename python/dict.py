a={"harry":34
    ,"Ram":36,
   "Mohan":69
}

#print(a["harry"])
#print(a,type(a))
#print(a.items())
#print(a.keys())
#print(a.values())

print(a.popitem())

a.update({"harry":78,"Raghvendra":"businessman"})
print(a.get("Shyam"))
print(a.get("Raghvendra"))
print(a)
