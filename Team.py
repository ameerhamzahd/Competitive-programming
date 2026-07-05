# Read the number of problems
n = int(input())
solved_count = 0

for _ in range(n):
    # Read the views of the three friends (0 or 1)
    views = input().split()
    
    # If two or more friends are sure (count of '1's >= 2)
    if views.count('1') >= 2:
        solved_count += 1

# Output the total number of problems they will solve
print(solved_count)
