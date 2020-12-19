arr = [input() for _ in range(5)]
inv = arr[::-1]

d = []
r = []

for i in range(5):
    d.append(arr[0][i] + arr[1][i] + arr[2][i] + arr[3][i] + arr[4][i])
    r.append(inv[0][i] + inv[1][i] + inv[2][i] + inv[3][i] + inv[4][i])

g = all([d[i] == arr[i] for i in range(5)])
r = all([r[i] == inv[i] for i in range(5)])

if g == r and g is not False:
    print("Magic Square like Sator Arepo")
else:
    print("Not a Magic Square")
