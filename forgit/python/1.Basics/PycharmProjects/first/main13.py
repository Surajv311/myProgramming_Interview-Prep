n=18
number_of_guesses=1
print("Number of guesses is limited to only 9 times: ")
while (number_of_guesses<=9):
    guess_number = int(input("Guess the number :\n"))
    if guess_number<18:
        print("you enter less number please input greater number.\n")
    elif guess_number>18:
        print("you enter greater number please input smaller number.\n ")
    else:
        print("you won\n")
        print(number_of_guesses,"no.of guesses he took to finish.")
        break
    print(9-number_of_guesses,"no. of guesses left")
    number_of_guesses = number_of_guesses + 1

if(number_of_guesses>9):
    print("Game Over")
"""
a = 43
guess = 0 ;
while(guess!=9):
    x = int(input("please input your number\n"))
    if(x>43):
        print("the number is less than the input you gave\n")
        guess = guess+1
    elif(x<43):
        print("the number is greater than the input you gave\n")
        guess = guess +1

    else:
        guess = guess + 1
        print("correct ans and the number of guesses you took is :",guess)
        break
"""