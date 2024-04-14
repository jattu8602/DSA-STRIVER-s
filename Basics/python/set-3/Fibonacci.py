def fibonacci_series(n):
    a,b = 0,1
    for i in range(n):
        print(a,end = " ")
        a,b = b,a+b

term = int(input("enter the number of terms:"))
print("fibonacci series:")
fibonacci_series(term)