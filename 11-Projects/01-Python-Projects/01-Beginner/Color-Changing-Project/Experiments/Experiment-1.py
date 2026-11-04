# Experiment 1: Multiple Random Colours

import random
from sty import fg

# 1. Function Definition
def generate_rgb():
    """Generates a tuple of 3 random integers representing RGB values (0-255)."""
    # Random number generation for each color channel
    r = random.randint(0, 255)
    g = random.randint(0, 255)
    b = random.randint(0, 255)
    return r, g, b

def main():
    print("--- Displaying 5 Random Colors ---\n")
    
    # 2. For Loop (Runs exactly 5 times)
    # range(1, 6) will produce numbers 1, 2, 3, 4, 5
    for i in range(1, 6):
        # Call the function to get random RGB values
        r, g, b = generate_rgb()
        
        # Create the sty terminal escape sequence
        color_escape = fg(r, g, b)
        
        # Display the output with individual index tracking
        print(f"Color #{i}: " + color_escape + f"RGB({r}, {g}, {b})" + fg.rs)

if __name__ == "__main__":
    main()
