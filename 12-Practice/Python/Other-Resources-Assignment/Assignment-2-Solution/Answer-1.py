# ============================================================
# Python Fundamentals - Assignment 2 Solutions
# ============================================================

# ============================================================
# Q1. Tax Calculator
# ============================================================
salary = float(input("Enter your salary: "))

if salary < 30000:
    tax_rate = 5
elif salary <= 70000:
    tax_rate = 15
else:
    tax_rate = 25

tax = (salary * tax_rate) / 100

print(f"Tax Rate = {tax_rate}%")
print(f"Tax Amount = {tax}")