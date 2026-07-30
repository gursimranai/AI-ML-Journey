# Take input from the user (input() always returns a string)
num = input("Enter a number: ")

# Convert the string to different data types
integer_num = int(num)
float_num = float(num)
string_num = str(num)

# Print values and their types
print("Integer:", integer_num, "| Type:", type(integer_num))
print("Float:  ", float_num, "| Type:", type(float_num))
print("String: ", string_num, "| Type:", type(string_num))