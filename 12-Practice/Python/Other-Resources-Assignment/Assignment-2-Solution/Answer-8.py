# ============================================================
# Q8. Simple Calculator Function
# ============================================================

def calculator(a, b, operation):

    if operation == "+":
        return a + b

    elif operation == "-":
        return a - b

    elif operation == "*":
        return a * b

    elif operation == "/":
        if b != 0:
            return a / b
        else:
            return "Division by zero is not allowed."

    else:
        return "Invalid Operation"

a = float(input("Enter first number: "))
b = float(input("Enter second number: "))
op = input("Enter operation (+,-,*,/): ")

print("Result =", calculator(a, b, op))