import sys

N, K = map(int, sys.stdin.readline().strip().split())

A = list(map(int, sys.stdin.readline().strip().split()))

A.sort()

print(A[K-1])