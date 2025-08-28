def count(s, k):
    n = len(s)
    total = 0
    
    for i in range(n):
        distinct = set()
        for j in range(i, n):
            distinct.add(s[j])
            if len(distinct) == k:
                total += 1
            elif len(distinct) > k:
                break
    return total
s = "pqpqs"
k = 2
print(count(s, k))  
