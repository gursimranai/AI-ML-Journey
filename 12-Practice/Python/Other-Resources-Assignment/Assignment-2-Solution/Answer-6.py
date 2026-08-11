# Print numbers between 1 and 100 that are divisible by both 3 and 5

for num in range(1, 101):
    # Check if the number is divisible by both 3 and 5
    if num % 3 == 0 and num % 5 == 0:
        print(num)