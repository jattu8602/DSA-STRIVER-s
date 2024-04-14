def is_armstrong(n):
    order = len(str(n))
    temp = n
    sum = 0
    while temp > 0:
        digit = temp % 10
        sum += digit ** order
        temp //= 10

    
    return n == sum

number = int (input("enter a nimber:"))
if is_armstrong(number):
    print(number,"is an armstrong number")
else:
    print(number,"is not an armstrong number")
    
