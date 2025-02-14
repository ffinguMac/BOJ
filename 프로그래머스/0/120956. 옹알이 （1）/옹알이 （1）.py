def solution(babbling):
    answer = 0
    valid_words = ["aya", "ye", "woo", "ma"]
    
    for word in babbling:
        check_word = [0, 0, 0, 0]
        temp_word = word

        while temp_word:
            matched = False
            for i, valid in enumerate(valid_words):
                if temp_word.startswith(valid):
                    check_word[i] = 1
                    temp_word = temp_word[len(valid):]
                    matched = True
                    break

            if not matched:
                break

        if matched:
            answer += 1

    return answer