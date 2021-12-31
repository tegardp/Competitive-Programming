n, h = [int(x) for x in input().split()]
a = [int(x) for x in input().split()]

sum=0
for i in range(0, n):
    if a[i] > h :
        sum += 1

print(n+sum)
