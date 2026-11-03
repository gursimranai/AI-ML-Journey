# Get total seconds from user
total_seconds = int(input("Enter a total number of seconds: "))

# Extract whole hours
hours = total_seconds // 3600
# Find remaining seconds after extracting hours
remaining_seconds = total_seconds % 3600

# Extract minutes and final seconds from the remainder
minutes = remaining_seconds // 60
seconds = remaining_seconds % 60

print(f"{total_seconds} seconds is equal to: {hours}h {minutes}m {seconds}s")
