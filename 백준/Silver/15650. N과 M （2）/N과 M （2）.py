def NandM(N, M, cnt, start, arr):
    if cnt == M:
        print(' '.join(map(str, arr[:M])))
        return
    for i in range(start, N + 1):
        arr[cnt] = i
        NandM(N, M, cnt + 1, i + 1, arr)

N, M = map(int, input().split())
arr = [0] * 9
NandM(N, M, 0, 1, arr)
