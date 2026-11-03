min = int(input("Enter the minutes: "))

hours = min // 60
remaining_min = min % 60

print(f"{min} mins =  {hours} hours:{remaining_min} mins")