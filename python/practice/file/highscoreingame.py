import random

def game():
    score=random.randint(1,100)
    print("Your playing a game...")
    print(f"Your highscore : {score}")

    with open("game.txt") as f:
        highscore=f.read()
        if(highscore!=""):
            highscore=int(highscore)

        else:
            highscore=0


    if(score>highscore):
        with open("game.txt","w") as f:
            f.write(str(score))



game()




