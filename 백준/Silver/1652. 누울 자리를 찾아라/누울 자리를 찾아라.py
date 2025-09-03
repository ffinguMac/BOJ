def count_horizontal(room, n):
  cnt = 0
  for i in range(n):
    consecutive = 0
    for j in range(n):
      if room[i][j] == '.':
        consecutive += 1
        if consecutive == 2:
          cnt += 1
      else:
        consecutive = 0
  return cnt

def count_vertical(room, n):
  cnt = 0
  for j in range(n):
    consecutive = 0
    for i in range(n):
      if room[i][j] == '.':
        consecutive += 1
        if consecutive == 2:
          cnt += 1
      else:
        consecutive = 0
  return cnt

if __name__ == "__main__":
  n = int(input())
  room = []
  for _ in range(n):
    line = input().strip()
    room.append(list(line))
  
  horizontal = count_horizontal(room, n)
  vertical = count_vertical(room, n)
  print(horizontal, vertical)
