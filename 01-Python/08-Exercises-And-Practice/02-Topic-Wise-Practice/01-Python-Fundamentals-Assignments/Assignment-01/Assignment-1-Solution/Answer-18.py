# Input values
marks_obtained = float(input("Enter marks obtained: "))
total_marks = float(input("Enter total marks possible: "))

# Validate to avoid division by zero
if total_marks > 0:
    percentage = (marks_obtained / total_marks) * 100
    print(f"Percentage: {percentage:.2f}%")
else:
    print("Error: Total marks must be greater than zero.")
