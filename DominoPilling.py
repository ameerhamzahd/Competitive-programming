# Read input M and N from a single line
m, n = map(int, input().split())

# Calculate the maximum number of dominoes using floor division
# The area of the board (m * n) divided by the area of a domino (2)
total_dominoes = (m * n) // 2

# Output the result
print(total_dominoes)
