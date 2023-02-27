print("\t \t * * * * * BioData * * * * * ")
NAME=input("Enter name ")
DOB=(input("Enter D.O.B "))
FN=input("Enter Father Name ")
MN=input("Enter Mother Name ")
Tp=input("Enter TENth% ")
Inter=input("Enter Inter% ")
Edu=input("Enter Current Education ")
Add=input("Enter Address ")
Th=input("Enter Thought ")
arr=[NAME,DOB,FN,MN,Tp,Inter,Edu,Add,Th]
for i in arr :
    print(i)

print("\n \n \n \t \t ***Display MY Data ****")
for i in arr:
    print(i)