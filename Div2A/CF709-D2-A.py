n,b,d = [int(x) for x in input().split(" ")]
sum = 0
count = 0
x = [int(x) for x in input().split(" ")]
for i in range(0, len(x)):
    if x[i]<= b:
        sum += x[i]
    if sum>d:
        sum=0
        count +=1
print(count)