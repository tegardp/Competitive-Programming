from math import pow

def lambdaMap(arr):
    ans = map(lambda x: [ int(pow(elem,2)) for elem in x if elem > 0 ], arr)
    return ans

if __name__ == '__main__':
    n = int(input())
    arr = []
    for _ in range(n):
        arr.append(list(map(int, input().split())))
    
    ans = lambdaMap(arr)
    for row in ans:
        print(' '.join(map(str, row)))
