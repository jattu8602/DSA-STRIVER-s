def liner_search(arr,x):
    for i in range (len(arr)):
        if arr[i] == x:
            return i
        return -1
    
arr = [23,34,323,2,32,32,3,23,2,2,32,3,2,0]    
x = 23
result = liner_search(arr,x)

if result == -1:
    print("Element not found")
else:
    print("Element found at index",result)