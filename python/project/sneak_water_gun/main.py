import random

computer=random.choice([-1,0,1])

youchoice=input("you choose : ")

youdict={"s":1,"w":-1,"g":0}

you=youdict[youchoice]

revercedict={1:"sneak",-1:"water",0:"gun"}

print(f"Your choice is: {revercedict[you]}\nComputer's choice is: {revercedict[computer]}")

if(computer==you):
    print("game draw")

else:
    if(computer==-1 and you==1):
        print("You Win!")
    elif(computer==-1 and you==0):
        print("You Loose!")
    elif(computer==1 and you==-1):
        print("You Loose!")
    elif(computer==1 and you==0):
        print("You Win!")
    elif(computer==0 and you==1):
        print("You Win!")
    elif(computer==0 and you==-1):
        print("You Loose!")
    else:
        print("Something went wrong")

