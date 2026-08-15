def sum_of_digits(n):
    # Variable to store the sum
    total = 0

    # Loop until the number becomes 0
    while n > 0:
        
        # Get the last digit
        digit = n % 10
        
        # Add the digit to total
        total += digit
        
        # Remove the last digit
        n = n // 10

    # Return the final sum
    return total


# Example
print(sum_of_digits(312))