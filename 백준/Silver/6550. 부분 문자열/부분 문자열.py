import sys

while True:
  try:
    s, t = map(str, sys.stdin.readline().split())
    idx = 0
    flag = 0
    for i in range(len(t)):
      if s[idx] == t[i]:
        idx += 1
      
      if idx == len(s):
        flag = 1
        break
    if flag:
      print("Yes")
    else:
      print("No")
  except:
    break