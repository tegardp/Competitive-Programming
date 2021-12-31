k, r = [int(x) for x in input().split(" ")]

count=1
while True:
    if (k*count) % 10 == 0:
        break
    elif (k*count-r) % 10 ==0:
        break
    count += 1

print(count)