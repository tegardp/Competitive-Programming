x = [int(x) for x in input().split(" ")]
d = max(x)

nominator = 7-d

if nominator % 6 == 0:
    division = 6
elif nominator % 3 == 0:
    division = 3
elif nominator % 2 == 0:
    division = 2
else:
    division = 1

print(f"{int(nominator/division)}/{int(6/division)}")


