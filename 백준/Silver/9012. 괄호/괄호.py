import sys

T = int(sys.stdin.readline().strip())

for _ in range(T):
  PS = str(sys.stdin.readline().strip())
  VPS = []
  flag = 0
  for i in range(len(PS)):
    if i == 0 and PS[0] == ')':
      flag = 1
      break
    else:
      if PS[i] == '(':
        VPS.append(PS[i])
      elif len(VPS) == 0 and PS[i] == ')':
        flag = 1
        break
      else:
        VPS.pop()
  if len(VPS) == 0 and flag == 0:
    print("YES")
  else:
    print("NO")
