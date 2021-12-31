import re

str = input()

str = re.sub("[^()\\[\\]\\{\\}]", '', str)

def checkBalancedParentheses(str):
    stack = []
    for i in str:
        if (stack):
            if stack[-1] == '[' and i == ']' or stack[-1] == '(' and i == ')' or stack[-1] == '{' and i == '}':
                stack.pop()
        else:
            stack.append(i)
    
    if not stack:
        return "balanced"
    return "not balanced"

print(checkBalancedParentheses(str))