import sys

K = int(sys.stdin.readline().strip())
stack = []
res = 0
for _ in range(K):
  num = int(sys.stdin.readline().strip())
  if num == 0:
    stack.pop()
  else:
    stack.append(num)
for i in range(len(stack)):
  res += stack[i]
print(res)