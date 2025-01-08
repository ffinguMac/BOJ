import sys

N = int(sys.stdin.readline().strip())
money = list(map(int, sys.stdin.readline().strip().split()))
M = int(sys.stdin.readline().strip())

min, max = 1, max(money)

while min <= max:
  mid = (min + max)//2
  cnt = 0
  for m in money:
    if m - mid > 0:
      cnt += mid
    else:
      cnt += m
  if cnt <= M:
    min = mid + 1
  else:
    max = mid -1

print(max)