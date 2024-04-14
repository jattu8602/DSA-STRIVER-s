def compute_lcm(x,y):
    if x>y:
        greater = x
    else:
        greater = y

    while True:
        if greater %x ==0 and greater %y==o:
            lcm = greater
            break
        greater +=1
    return lcm

num1 = int (input("enter first number: "))        
num2 = int(input("enter second number:"))
print("the lcm of", num1, "and", num2, "is", compute_lcm(num1,num2))
            