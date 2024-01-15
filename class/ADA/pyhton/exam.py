# class Person:
#     def setname(self, name):
#         self.name = name

#     def getname(self):
#         print("Name:", self.name)


# class Student(Person):
#     def setage(self, age):
#         self.age = age

#     def getage(self):
#         print("Age:", self.age)


# s1 = Student()

# name = input("Enter name: ")
# age = input("Enter age: ")

# s1.setname(name)
# s1.setage(age)

# s1.getname()
# s1.getage()

# base = float(input("Enter the base number: "))
# exponent = float(input("Enter the exponent: "))

# # Using the ** operator
# result_operator = base ** exponent
# print("Result using ** operator:", result_operator)

# # Using the pow() function
# result_pow = pow(base, exponent)
# print("Result using pow() function:", result_pow)

# from Module_Imp3 import *

# side = int(input("Enter the side of the circle: "))

# area = calculatearea(side, side)
# diameter = calculatediameter(side)
# pi = pivalue()



# numbers = [12, 75, 150, 180, 145, 525, 50]

# for number in numbers:
#     if number % 5 == 0:  # Condition (a): Number must be divisible by five
#         if number > 150:  # Condition (b): Skip numbers greater than 150
#             continue
#         elif number > 500:  # Condition (c): Stop loop if number is greater than 500
#             break
#         else:
#             print(number)


# Get user input to construct the tuple
# tuple_elements = input("Enter elements for the tuple (comma-separated): ").split(',')

# # Convert the input elements to tuple
# my_tuple = tuple(tuple_elements)

# # Get the element to check for membership in the tuple
# element = input("Enter an element to check for membership: ")

# # Check if the element is present in the tuple
# if element in my_tuple:
#     print(f"The element '{element}' is present in the tuple.")
# else:
#     print(f"The element '{element}' is not present in the tuple.")
print(5**10)