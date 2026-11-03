# Accept numeric values
x = float(input("Enter first number (x): "))
y = float(input("Enter second number (y): "))

print(f"\nBefore swap: x = {x}, y = {y}")

# Python tuple unpacking option (cleanest & most idiomatic Python approach)
x, y = y, x

print(f"After swap: x = {x}, y = {y}")
