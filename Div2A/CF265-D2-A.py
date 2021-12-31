s = input()
t = input()
pos = 0

for i in range(0, len(t)):
    if t[i] == s[pos]:
        pos+=1

print(pos+1)
