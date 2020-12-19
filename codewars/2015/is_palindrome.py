def clean(arr):
    return [''.join([c.lower() for c in i if c.isalpha()]) for i in arr]

inp = []
while True:
    _ = input()
    if _ != "Palindrome!":
        inp.append(_)
    else:
        break

for i, v in enumerate(clean(inp.copy())):
    if v == v[::-1]:
        print(f"\"{inp[i]}\" is a palindrome")
    else:
        print(f"\"{inp[i]}\" is not a palindrome")
