class Rectangle:
    def __init__(selff,length,width):
        selff.length = length
        selff.width = width

    def area(selff):
        return selff.length * selff.width

    def perimeter(selff):

        return 2 * (selff.length + selff.width)
    
length = float(input("enter length of the rectangle:"))
width = float(input("enter width of the rectangle:"))

rectangle = Rectangle(length,width)

print("area of the rectangle is:",rectangle.area())
print("perimeter of the rectangle is:",rectangle.perimeter())