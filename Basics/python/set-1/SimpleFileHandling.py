# writing  to a file
with open("output.txt","w") as file:
    file.write("Hello, this is jatin.")

#Reading from a file
with open("output.txt","r") as file:
    print("data from output.txt file is :",file.read())    
