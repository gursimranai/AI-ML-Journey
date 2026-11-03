# Take two numbers as input and convert to floats immediately
num1 = float(input("Enter first number: "))
num2 = float(input("Enter second number: "))

# Perform and print basic operations
print(f"Sum: {num1 + num2}")
print(f"Difference: {num1 - num2}")
print(f"Product: {num1 * num2}")

# Handle potential edge-case: division by zero
if num2 != 0:
    print(f"Quotient: {num1 / num2}")
else:
    print("Quotient: Cannot divide by zero!")
