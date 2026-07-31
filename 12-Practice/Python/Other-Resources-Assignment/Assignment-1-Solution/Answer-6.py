# Input two numbers from the user
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

# Display original values
print("\nBefore swapping:")
print("a =", a)
print("b =", b)

# Swap without a temporary variable
a, b = b, a

# Display swapped values
print("\nAfter swapping:")
print("a =", a)
print("b =", b)