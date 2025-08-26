def par(s: str) -> bool:
    stack = []
    for ch in s:
        if ch in "({[":
            stack.append(ch)
        elif ch in ")}]":
            if not stack:
                return False
            top = stack[-1]
            if (ch == ')' and top != '(') or \
               (ch == '}' and top != '{') or \
               (ch == ']' and top != '['):
                return False
            stack.pop()
    return len(stack) == 0

print(par("[{()}]"))  
print(par("[(])"))
