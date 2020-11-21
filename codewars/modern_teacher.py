def main(template, key, N, rep_with):
    template = template.replace(key, "{}")
    for i in rep_with:
        print(template.format(i))


template = input()
key = input()
N = int(input())
rep_with = []
for _ in range(N):
    rep_with.append(input())

main(template, key, N, rep_with)
