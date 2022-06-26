i = 1
k, r = list(map(int, input().split(" ")))

while True:
    if k * i % 10 == 0: break
    if k * i % 10 - r == 0 : break
    i += 1

print(i)