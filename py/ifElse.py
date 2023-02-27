n=int(input("Enter tu chake ODD or EVEN: "))
if n%2==0:
    print(n," is even value")
else :
    print(n," is odd value")

#WAP largest of three number
a=int(input("Enter num1: "))
b=int(input("Enter num2: "))
c=int(input("Enternum3 : "))

if(a > b and a > c):
    print(a," is larger")

elif (b > a and b > c):
    print(b," is larger")

else :
    print(c," is larger")



#chake whether a porsion is eligoible to vote
z=int(input("Enter Age: "))
if (z<=18):
    print("Your age is ",z ," You are eligoible to vote")
else :
    print("Your age is ",z ," You are not eligoible to vote")
