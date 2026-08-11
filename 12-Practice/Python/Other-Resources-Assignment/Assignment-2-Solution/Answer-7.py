# Continuously take input from the user
# and check whether the number is positive or negative.
# The program stops when the user enters "Quit".

while True:
    # Take input from the user
    value = input("Enter a number (or type 'Quit' to exit): ")

    # Check if the user wants to quit
    if value.lower() == "quit":
        print("Program ended.")
        break

    # Convert the input from string to integer
    num = float(value)

    # Check whether the number is positive or negative
    if num > 0:
        print("Positive")
    elif num < 0:
        print("Negative")
    else:
        print("Zero")