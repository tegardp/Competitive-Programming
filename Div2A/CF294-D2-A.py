n = int(input())
a = [int(x) for x in input().split(" ")]
m = int(input())

for i in range(0,m):
    x, y = [int(x) for x in input().split(" ")]
    x = x-1

    left,right = [0,0]
    for j in range(1, a[x]+1):
        if j<y:
            left +=1
        elif j>y:
            right +=1
    
    if x == 0:
        a[x] = 0
        if len(a) > 1:
            a[x+1] += right
    elif x+1 == n:
        a[x-1] += left
        a[x] = 0
    else:
        a[x-1] += left
        a[x+1] += right
        a[x] = 0

for i in range(0,n):
    print(a[i])