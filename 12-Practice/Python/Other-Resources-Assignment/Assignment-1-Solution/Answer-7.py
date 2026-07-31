# Q7: Convert Celsius to Fahrenheit

# Ask the user to enter the temperature in Celsius (string input)
celsius = input("Enter temperature in Celsius: ")

# Convert the string to a float
celsius = float(celsius)

# Convert Celsius to Fahrenheit
fahrenheit = (celsius * (9 / 5)) + 32

# Print the result
print("Temperature in Fahrenheit:", fahrenheit)