# Experiment 3 : Generate HEX colour code
import random


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

def generate_hex(red, green, blue):
    """
    Convert RGB values into a hexadecimal colour code.
    """
    return f"#{red:02X}{green:02X}{blue:02X}"


red, green, blue = generate_rgb()

hex_color = generate_hex(red, green, blue)

print("RGB:", (red, green, blue))
print("HEX:", hex_color)