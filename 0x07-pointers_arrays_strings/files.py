import os

# Define the filenames
filenames = ["0-memset.c", "1-memcpy.c", "100-set_string.c", "101-crackme_password",
             "2-strchr.c", "3-strspn.c", "4-strpbrk.c", "5-strstr.c",
             "7-print_chessboard.c", "8-print_diagsums.c"]

# Create the files
for filename in filenames:
    with open(filename, "w") as f:
        pass
