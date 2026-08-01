# ============================================================
# Q10. Number Guessing Game
# ============================================================

secret_number = 27

guess = int(input("Guess the secret number: "))

if guess > secret_number:
    print("Too high")

elif guess < secret_number:
    print("Too low")

else:
    print("Correct!")