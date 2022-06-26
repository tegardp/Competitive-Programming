count = 0
s = list(map(int, input().split(' ')))

s.sort()

for i in range(0,3): 
    if (s[i] == s[i+1]): count += 1

print(count)