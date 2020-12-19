def human_age(age):
    h_age = 0
    while age != 0:
        if age > 2:
            h_age += 4
        else:
            h_age += 10
        age -= 1
    return h_age

age = int(input())  
print(f"{input()} is {human_age(age)} human years old")