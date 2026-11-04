# Experiment 4: Continuous Colour Generator

import random
from sty import fg, bg, rs

def generate_rgb():
    """Generates a tuple of 3 random integers representing RGB values (0-255)."""
    r = random.randint(0, 255)
    g = random.randint(0, 255)
    b = random.randint(0, 255)
    return r, g, b

def main():
    print("--- Continuous Color Generator ---")
    print("Press Enter to keep generating new colors, or type 'exit' to quit.\n")
    
    # 1. While Loop for infinite/continuous execution
    while True:
        # Generate new foreground and background variables
        f_r, f_g, f_b = generate_rgb()
        b_r, b_g, b_b = generate_rgb()
        
        # Instantiate escape contexts
        text_color = fg(f_r, f_g, f_b)
        bg_color = bg(b_r, b_g, b_b)
        
        # Display sample output block
        print(bg_color + text_color + f" FG: ({f_r},{f_g},{f_b}) | BG: ({b_r},{b_g},{b_b}) " + rs.all)
        
        # 2. User Input collection point
        user_action = input("Press [Enter] for next color, or type 'exit': ").strip()
        
        # 3. Conditional Statements to check if the exit sentinel is matched
        if user_action.lower() == "exit":
            print("\nExiting application state. Goodbye!")
            break  # Terminates the while loop context instantly

if __name__ == "__main__":
    main()
