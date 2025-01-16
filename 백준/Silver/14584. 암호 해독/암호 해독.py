import sys

crypto = sys.stdin.readline().strip()
n = int(sys.stdin.readline().strip())
dictionary = [sys.stdin.readline().strip() for _ in range(n)] 

for shift in range(26):
    decoded = ""
    for char in crypto:
        decoded += chr(((ord(char) - ord('a') + shift) % 26) + ord('a'))

    if any(word in decoded for word in dictionary):
        print(decoded)
        break
