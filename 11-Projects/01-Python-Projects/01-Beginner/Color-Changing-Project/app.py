
import random
from sty import fg, rs


def generate_rgb():
    """
    Generate random RGB colour values.

    Returns:
        tuple: Three random integer values representing
               Red, Green, and Blue.
    """
    red = random.randint(0, 255)
    green = random.randint(0, 255)
    blue = random.randint(0, 255)

    return red, green, blue


def generate_color(red, green, blue):
    """
    Generate a terminal foreground colour using RGB values.

    Args:
        red (int): Red component (0-255).
        green (int): Green component (0-255).
        blue (int): Blue component (0-255).

    Returns:
        str: Terminal colour escape sequence.
    """
    return fg(red, green, blue)


def main():
    """
    Main function to generate and display a random colour.
    """

    # Generate random RGB values
    red, green, blue = generate_rgb()

    # Generate terminal colour
    color = generate_color(red, green, blue)

    # Display colourful message
    print(
        color + "I am randomly changing color muahhahahahahahahaha"
        + fg.rs
    )

    # Display RGB information
    print(f"\nGenerated RGB Color: ({red}, {green}, {blue})")


if __name__ == "__main__":
    main()
