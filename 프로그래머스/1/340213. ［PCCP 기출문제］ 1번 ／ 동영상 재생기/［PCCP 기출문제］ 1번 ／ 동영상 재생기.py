

def solution(video_len, pos, op_start, op_end, commands):
    def time_to_sec(time_str):
        mm, ss = map(int, time_str.split(':'))
        return mm * 60 + ss
    
    def sec_to_time(sec):
        mm = sec // 60
        ss = sec % 60
        return f"{mm:02d}:{ss:02d}"
    
    def skip_opening(current_sec):
        if op_start_sec <= current_sec <= op_end_sec:
            return op_end_sec
        return current_sec
    video_len_sec = time_to_sec(video_len)
    current_sec = time_to_sec(pos)
    op_start_sec = time_to_sec(op_start)
    op_end_sec = time_to_sec(op_end)
    
    current_sec = skip_opening(current_sec)
    
    for command in commands:
        if command == "prev":
            current_sec = max(0, current_sec - 10)
        elif command == "next":
            current_sec = min(video_len_sec, current_sec + 10)
            
        current_sec = skip_opening(current_sec)
    
    return sec_to_time(current_sec)