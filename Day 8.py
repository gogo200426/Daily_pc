def reverseWords(s):
    words = s.split()  
    words = words[::-1]
    result = " ".join(words)
    return result
s = "  the   sky  is blue  "
print(reverseWords(s))  
