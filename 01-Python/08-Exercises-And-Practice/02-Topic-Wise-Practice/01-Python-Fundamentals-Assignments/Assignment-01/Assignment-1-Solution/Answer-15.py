# Accept user distance and time parameters
distance = float(input("Enter distance traveled (in kilometers): "))
time = float(input("Enter travel time (in hours): "))

# Safely handle potential division by zero edge-case
if time > 0:
    speed = distance / time
    print(f"The average speed is {speed:.2f} km/h")
elif time == 0:
    print("Error: Travel time cannot be zero when moving a distance!")
else:
    print("Error: Time cannot be negative.")
