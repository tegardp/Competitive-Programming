m = 0
n = 0
for i in range(5):
    arr = [int(x) for x in input().split(" ")]
    try: 
        arr.index(1)
        find_1 = 1
    except:
        find_1 =0
    
    if find_1:
        m = i
        n = arr.index(1)

move = abs(2-m) + abs(2-n)
print(move)