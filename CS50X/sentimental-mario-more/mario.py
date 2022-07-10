# TODO
def main():
    height = get_int()
    for i in range(height):
        # Creating extra space
        for k in range(height - i - 1):
            print(" ", end="")
            # Printing hashes
        for j in range(i + 1):
            print("#", end="")
        # Creating two spaces
        print("  ", end="")
        # Creating second mario table
        print("#" * (i + 1), end="")
        # To go to next line.
        print()


def get_int():
    while True:
        try:
            # Getting input
            n = int(input("Height: "))
            # Removing case of negative numbers
            if n > 0 and n < 9:
                break
            # Removing error due to other characters
        except ValueError:
            print("That is not an Integer")
    return n


main()
