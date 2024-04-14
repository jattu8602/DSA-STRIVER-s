def bubble_sort(arr):
    n = len(arr)
    for i in range(n-1):
        for j in range(0,n-i-1):
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1] = arr[j+1],arr[j]



arr = [64,32,45,67,8,9,8,7,55,89]
bubble_sort(arr)

print("Sorted array is:")
for i in range(len(arr)):
    print("%d" %arr[i])