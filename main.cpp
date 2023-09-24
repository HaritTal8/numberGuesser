import random
import math

lower = int(input("Enter the lower bound of your guessing number: \n"))
upper = int(input("Enter the upper bound of your guessing number: \n"))

randomNumber = random.randint(lower, upper)
print("\n\t You only have ", round(math.log(upper-lower + 1, 2)), " more chances to guess the number! \n")

counter = 0

while counter < math.log(upper-lower + 1, 2):
  counter+=1

  guessNumber = int(input("Guess a number! "))

  if randomNumber == guessNumber:
    print("Congratulations! You have successfully guessed the number in ", counter, " tries!")
    break
  elif randomNumber > guessNumber:
    print("The number that you have guessed is too small. Guess a higher number!")
  elif randomNumber < guessNumber:
    print("The number that you have guessed is too large. Guess a smaller number!")

if counter >= math.log(upper-lower + 1, 2):
  print("\n The number is %d" % randomNumber)
