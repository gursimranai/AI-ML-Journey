# Accept a two-digit integer
num = int(input("Enter a positive two-digit integer: "))

# Extract digits mathematically
tens = num // 10
ones = num % 10

print(f"Tens digit: {tens}")
print(f"Ones digit: {ones}")
