# Accept price and quantity inputs
price = float(input("Enter the price of one item: "))
quantity = int(input("Enter the quantity purchased: "))

# Calculate subtotal, 5% tax, and final total bill
subtotal = price * quantity
tax = subtotal * 0.05
total_bill = subtotal + tax

print(f"\n--- Shopping Receipt ---")
print(f"Subtotal: ${subtotal:.2f}")
print(f"Tax (5%): ${tax:.2f}")
print(f"Total Bill: ${total_bill:.2f}")
