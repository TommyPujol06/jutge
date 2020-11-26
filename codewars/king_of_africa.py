import string

phrase = input().split()
for i, word in enumerate(phrase):
    last = word[-1]
    if last == 'r' or last == 'R':
        phrase[i] = word + last
    if len(word) > 1:
        if (word[-2] == 'r' or last == 'R') and last in string.punctuation:
            phrase[i] = word[:-1] + word[-2] + last

print(' '.join(phrase))
