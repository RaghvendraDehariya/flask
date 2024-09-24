#module import
import random as r

#variable define
i=0
j=0
list1 = []

#greeting 
print("\t\t\tWelcome To Hangman!\t\t\t")



words = ["Hunter","Bounty","Hacker","random"]

word = r.choice(words).lower()
print(word)
print("you get 5 guesses")

for i in word:

    list1 += "_"

print(list1)

game_over = False 

while not game_over:
    ch = input("\nGuess a word :").lower()
    for pos in range(len(word)):
        letter = word[pos]
        if letter==ch:
            list1[pos] = letter

    if ch not in list1:
        j+=1
        print(f'you have {5-j} guesses left')
    if j==5:
        print("You Loose")
        game_over=True

    if "_" not in list1:
        print("You Win")
        game_over = True 
    print("\n",list1,"\n")


