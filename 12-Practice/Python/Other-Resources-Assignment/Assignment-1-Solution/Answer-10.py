# Q10: Integer and Fractional Part of a Decimal Number

num = float(input("Enter a decimal number: "))

integer_part = int(num)
fractional_part = round(num - integer_part, 2)

print("Integer part:", integer_part)
print("Fractional part:", fractional_part)