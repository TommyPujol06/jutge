def is_prime(n):
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

inp = []
while True:
    _ = input()
    if _ != "0":
        inp.append(int(_))
    else:
        break

for i in inp:
    if is_prime(i):
        print(f"{i} is prime")
    else:
        print(f"{i} is not prime")
