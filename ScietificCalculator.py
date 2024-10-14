import math  # Import the math library to use mathematical functions

# Function to add two numbers
def add(x, y):                
    return x + y

# Function to subtract second number from the first
def subtract(x, y):          
    return x - y

# Function to multiply two numbers
def multiply(x, y):          
    return x * y

# Function to divide first number by the second, handling division by zero
def divide(x, y):            
    if y == 0:
        return "Error! Division by zero."
    else:
        return x / y

# Function to calculate power of one number raised to another
def power(x, y):             
    return math.pow(x, y)

# Function to calculate the square root of a number
def square_root(x):          
    return math.sqrt(x)

# Function to calculate the logarithm of a number with a specified base (default is 10)
def logarithm(x, base=10):   
    return math.log(x, base)

# Function to calculate the sine of an angle in degrees
def sine(x):                
    return math.sin(math.radians(x))

# Function to calculate the cosine of an angle in degrees
def cosine(x):              
    return math.cos(math.radians(x))

# Function to calculate the tangent of an angle in degrees
def tangent(x):             
    return math.tan(math.radians(x))

# Function to calculate the factorial of a number
def factorial(x):           
    return math.factorial(x)

# Main function to run the calculator
def main():
    print("Select an operation:")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    print("5. Power")
    print("6. Square Root")
    print("7. Logarithm")
    print("8. Sine")
    print("9. Cosine")
    print("10. Tangent")
    print("11. Factorial")

    while True:
        # Get the user's choice of operation
        choice = input("Enter choice(1/2/3/4/5/6/7/8/9/10/11): ")

        # For basic operations that need two numbers
        if choice in ['1', '2', '3', '4', '5']:
            x = float(input("\nEnter first number , x: "))
            y = float(input("Enter second number , y: "))

            # Perform the appropriate operation based on the user's choice
            if choice == '1':
                print(f"{x} + {y} = {add(x, y)}")
            elif choice == '2':
                print(f"{x} - {y} = {subtract(x, y)}")
            elif choice == '3':
                print(f"{x} * {y} = {multiply(x, y)}")
            elif choice == '4':
                print(f"{x} / {y} = {divide(x, y)}")
            elif choice == '5':
                print(f"{x} ^ {y} = {power(x, y)}")

        # For operations that need one number
        elif choice in ['6', '7', '8', '9', '10', '11']:
            num = float(input("\nEnter number , x: "))
            if choice == '6':
                print(f"Square root of {num} = {square_root(num)}")
            elif choice == '7':
                base = float(input("Enter base (default is 10): ") or 10)
                print(f"Logarithm of {num} with base {base} = {logarithm(num, base)}")
            elif choice == '8':
                print(f"Sine of {num} degrees = {sine(num)}")
            elif choice == '9':
                print(f"Cosine of {num} degrees = {cosine(num)}")
            elif choice == '10':
                print(f"Tangent of {num} degrees = {tangent(num)}")
            elif choice == '11':
                print(f"Factorial of {int(num)} = {factorial(int(num))}")

        else:
            print("Invalid Input")  # Inform the user if the input is not valid

        # Ask if the user wants to perform another calculation
        next_calculation = input("Do you want to perform another calculation? (yes/no): ")
        if next_calculation.lower() != 'yes':
            break  # Exit the loop if the user doesn't want another calculation

# Entry point of the program
if __name__ == "__main__":
    main()
Hardik Suthar
