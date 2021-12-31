import math
import os
import random
import re
import sys


s= input()
stack = []
for i in s:
    if stack:
        if stack[-1] == '(' and i == ')':
            stack.pop()
        else:
            stack.append(i)
    else:
        stack.append(i)  

print(len(stack))
