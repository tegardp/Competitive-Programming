mult_str = ""
arr = []
for i in range(999,99,-1):
    for j in range(999,99,-1):
        mult = i*j
        mult_str = str(mult)
        if mult_str == mult_str[::-1]:
            arr.append(mult)

print(max(arr))


