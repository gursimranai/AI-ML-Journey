# Q8: Calculate Simple Interest (SI)

# Ask the user to enter the values (string input)
principal = float(input("Enter the Principal (P): "))
rate = float(input("Enter the Rate of Interest (R): "))
time = float(input("Enter the Time (T) in years: "))


# Calculate Simple Interest
si = (principal * rate * time) / 100

# Print the result
print("Simple Interest (SI):", si)