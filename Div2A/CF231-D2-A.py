n = int(input())

win = 0
while(n):
    match = [int(x) for x in input().split(" ")]
    if sum(match) >1:
        win +=1
    n -= 1

print(win)