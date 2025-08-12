def solution(n, w, num):
    answer = 1
    row = (num - 1) // w
    k = (num - 1) % w
    if (row % 2 == 0):
        col = k
    else:
        col = w - 1 - k
        
    last_row = (n - 1) // w

    for r in range(row + 1, last_row + 1):
        if r < last_row or n % w == 0:
            row_len = w
        else:
            row_len = n % w
        if r % 2 == 0:
            idx = col
        else:
            idx = w - 1 - col
        if idx < row_len:
            answer += 1
    return answer
