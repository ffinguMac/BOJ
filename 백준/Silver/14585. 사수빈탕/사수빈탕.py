import sys

n, m = map(int, sys.stdin.readline().strip().split())
mapp = [[0] * 302 for _ in range(302)]
dp = [[0] * 302 for _ in range(302)]

for _ in range(n):
  x, y = map(int, sys.stdin.readline().strip().split())
  if (m - y - x > 0):
    mapp[y+1][x+1] = m - y - x
  else:
    mapp[y+1][x+1] = 0

for i in range(1, 302):
  for j in range(1, 302):
    dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + mapp[i][j]

print(dp[301][301])
