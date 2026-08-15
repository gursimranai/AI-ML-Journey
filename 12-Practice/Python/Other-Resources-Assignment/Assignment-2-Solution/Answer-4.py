def count_digits(n):
    # Variable to store count
    count = 0

    # Loop until the number becomes 0
    while n > 0:
        
        # Increase count by 1
        count += 1
        
        # Remove the last digit
        n = n // 10

    # Return total count
    return count


# Example
print(count_digits(312))