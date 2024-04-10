
def factorial(n):
    if n==0:
        return 1
    
    else:
        print(n)
        return n*factorial(n-1)
      
    
    



num = int(input("enter a number to find factorial:"))
print("factorial is :",factorial(num))