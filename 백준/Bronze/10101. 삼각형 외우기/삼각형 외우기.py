def check_triangle(a, b, c):
  if a + b + c != 180:
    return "Error"
  if a == b == c:
    return "Equilateral"
  elif a == b or b == c or c == a:
    return "Isosceles"
  else:
    return "Scalene"

if __name__ == "__main__":
  a = int(input())
  b = int(input())
  c = int(input())
  print(check_triangle(a, b, c))
