def to_min(t):
    return (t // 100) * 60 + (t % 100)

def solution(schedules, timelogs, startday):
    n = len(schedules)
    
    limits = [to_min(t) + 10 for t in schedules]

    answer = 0
    for emp in range(n):
        ok = True
        for i in range(7):
            weekday = (startday + i - 1) % 7 + 1  
            if weekday >= 6:                      
                continue
            if to_min(timelogs[emp][i]) > limits[emp]:
                ok = False
                break
        if ok:
            answer += 1
    return answer