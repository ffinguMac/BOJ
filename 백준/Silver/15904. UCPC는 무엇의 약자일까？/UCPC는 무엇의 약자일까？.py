def check_sentence(sentence):
    target = ['U', 'C', 'P', 'C']
    idx = 0
    
    for char in sentence:
        if char == target[idx]:
            idx += 1
            if idx == 4:  # UCPC를 모두 찾았으면
                return True
    return False

sentence = input().strip()
if check_sentence(sentence):
    print("I love UCPC")
else:
    print("I hate UCPC")
    