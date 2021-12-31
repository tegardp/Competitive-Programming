l, b = [int(x) for x in input().split(" ")]

year = 0

while True:
    l *= 3
    b *= 2
    year +=1

    if l>b:
        break

print(year)

