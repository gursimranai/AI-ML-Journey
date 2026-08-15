def print_digits(n):
    # Loop until the number becomes 0
    while n > 0:
        
        # Get the last digit
        digit = n % 10
        
        # Print the digit
        print(digit)
        
        # Remove the last digit
        n = n // 10


# Example
print_digits(312)