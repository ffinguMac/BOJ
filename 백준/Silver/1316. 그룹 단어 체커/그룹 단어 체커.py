import sys

N = int(sys.stdin.readline().strip())
res = 0
for _ in range(N):
  word = str(sys.stdin.readline().strip())
  tmp = [0 for _ in range(26)]
  flag = 0
  for i in range(len(word) - 1):
    if tmp[ord(word[i]) - 97] == 1:
      flag = 1
      break
    if word[i] == word[i + 1]:
      continue
    else:
      tmp[ord(word[i]) - 97] = 1
  
  if flag == 0 and tmp[ord(word[len(word) - 1]) - 97] == 0:
    res += 1
  
print (res)