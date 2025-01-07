import sys

k, n = map(int, sys.stdin.readline().strip().split())
lan = []
for __ in range(k):
  lan.append(int(sys.stdin.readline().strip()))
min, max = 1, max(lan)

while min <= max:
  mid = (min + max)//2
  cnt = 0
  for l in lan:
    cnt += l // mid
  if cnt < n:
    max = mid - 1
  else:
    min = mid + 1

print(max)