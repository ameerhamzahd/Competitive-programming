# Read the number of words to process
n = int(input())

for _ in range(n):
    word = input()
    length = len(word)
    
    # Check if the word length strictly exceeds 10
    if length > 10:
        # Abbreviate: first char + middle count + last char
        print(f"{word[0]}{length - 2}{word[-1]}")
    else:
        # Print word as is
        print(word)
