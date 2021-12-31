str = [int(x) for x in input().split(" ")]

count = 1
str.sort()
for i in range(0,3):
    if str[i] != str[i+1]:
        count +=1

print(4-count)