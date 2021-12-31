from math import pow

sum_1 = 0
sum_2 = 0
for i in range(1,101):
    sum_1 += pow(i,2)
    sum_2 += i

print(pow(sum_2,2) - sum_1)