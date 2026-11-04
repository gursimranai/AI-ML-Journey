# Experiment 5: User-Controlled Generator


import random
from sty import fg, rs

def generate_rgb():
    """Generates a tuple of 3 random integers representing RGB values (0-255)."""
    r = random.randint(0, 255)
    g = random.randint(0, 255)
    b = random.randint(0, 255)
    return r, g, b

def main():
    print("--- User-Controlled Color Generator ---")
    
    # 1. Take user input
    user_input = input("How many random colors would you like to generate? ").strip()
    
    # 2. Input Validation
    # .isdigit() checks if the string contains only numbers (covers negative numbers and text)
    if user_input.isdigit():
        # 3. Type Conversion (String to Integer)
        count = int(user_input)
        
        if count == 0:
            print("Zero colors requested. Nothing to display!")
            return
            
        print(f"\nGenerating {count} colors:\n")
        
        # 4. Loop execution based on user selection
        for i in range(1, count + 1):
            r, g, b = generate_rgb()
            color_escape = fg(r, g, b)
            
            # Print the colored output
            print(f"Color #{i}: " + color_escape + f"RGB({r}, {g}, {b})" + fg.rs)
            
    else:
        # Error handling for invalid inputs like letters, floats, or negative numbers
        print(fg.red + "Error: Please enter a valid positive whole number!" + fg.rs)

if __name__ == "__main__":
    main()

