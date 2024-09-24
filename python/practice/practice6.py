def rem(l,word):
    n=[]
    for item in l:
        if not(item==word):
            n.append(item.strip(word))
    return n




l=["ram","hary","shiv","rohan","krishna","an"]

print(rem(l,"an"))


