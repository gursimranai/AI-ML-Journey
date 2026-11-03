# Taking input from the user for two integers and one float, calculating their average, and printing the result.
int1 = int(input("Enter first integer: "))
int2 = int(input("Enter second integer: "))
float1 = float(input("Enter first float: "))

# Converting the integers to float and calculating the average
sum = float(int1 + int2 + float1)
average = sum / 3

# Printing the average
print(f"The average of {int1}, {int2}, and {float1} is: {average}")
