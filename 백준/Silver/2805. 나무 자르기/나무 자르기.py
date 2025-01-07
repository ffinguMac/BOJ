import sys
n, m = map(int, sys.stdin.readline().strip().split())
tree = list(map(int, sys.stdin.readline().strip().split()))
min, max = 0, max(tree)

while min <= max:
    mid = (min + max)//2
    len = 0
    for h in tree:
        if h - mid > 0:
            len += h - mid
    if len < m:
        max = mid - 1
    else:
        min = mid + 1
        
print(max)