def all_perms(s):
    if len(s) == 0:
        return [""]
    result = []
    for i, ch in enumerate(s):
        rest = s[:i] + s[i+1:]  
        for perm in all_perms(rest):
            new_perm = ch + perm
            if new_perm not in result: 
                result.append(new_perm)
    return result
s = "abc"
print(all_perms(s))
