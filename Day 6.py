def find_arrays(arr):
    n = len(arr)
    result = []
    for i in range(n):
        sum = 0
        for j in range(i, n):
            sum += arr[j]
            if sum == 0:
                result.append((i, j))
    
    return result
arr = [1, 2, -3, 3, -1, 2]
print(find_arrays(arr))  
