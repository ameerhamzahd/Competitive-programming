# Read n (total participants) and k (the benchmark position)
n, k = map(int, input().split())

# Read the scores into a list
scores = list(map(int, input().split()))

# The benchmark score is the k-th score (index k-1)
benchmark = scores[k - 1]

# Count how many scores are >= benchmark and > 0
advancing_count = 0
for s in scores:
    if s >= benchmark and s > 0:
        advancing_count += 1

print(advancing_count)
