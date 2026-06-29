# Initial value of x
x = 0

# Read number of operations
n = int(input())

# Iterate through each operation
for _ in range(n):
    operation = input()
    # If '+' is in the operation (e.g., ++X or X++), increment x
    if '+' in operation:
        x += 1
    # If '-' is in the operation (e.g., --X or X--), decrement x
    else:
        x -= 1

# Output the final value of x
print(x)
