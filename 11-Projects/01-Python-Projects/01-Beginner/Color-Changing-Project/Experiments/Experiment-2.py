# Experiment 2: Random Background Colours

import random
from sty import fg, bg, rs

def generate_rgb():
    """Generates a tuple of 3 random integers representing RGB values (0-255)."""
    r = random.randint(0, 255)
    g = random.randint(0, 255)
    b = random.randint(0, 255)
    return r, g, b

def main():
    print("--- Random Foreground and Background Colors ---\n")
    
    for i in range(1, 6):
        # 1. Generate unique random RGB values for both layers
        fg_r, fg_g, fg_b = generate_rgb()
        bg_r, bg_g, bg_b = generate_rgb()
        
        # 2. Third-party library functions: Convert RGB tuples into ANSI escape sequences
        text_color = fg(fg_r, fg_g, fg_b)
        background_color = bg(bg_r, bg_g, bg_b)
        
        # 3. Terminal formatting: Combine bg and fg, and wipe clean with rs.all
        print(f"Combination #{i}:")
        print(f" -> Text: RGB({fg_r}, {fg_g}, {fg_b})")
        print(f" -> Background: RGB({bg_r}, {bg_g}, {bg_b})")
        print(background_color + text_color + "   Beautiful Styled Terminal Text Output!   " + rs.all)
        print()  # Spacer line

if __name__ == "__main__":
    main()
