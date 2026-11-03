# Ask for a positive integer
number = int(input("Enter a positive integer: "))

# Modulo 10 (%) always strips away everything except the units place digit
last_digit = number % 10

print(f"The last digit of {number} is {last_digit}")
