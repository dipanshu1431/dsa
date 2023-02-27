d=("hii",1,45,32.8,"py")
print(type(d))
print(d)

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
arr=(NAME,DOB,FN,MN,Tp,Inter,Edu,Add,Th)
for i in arr :
    print(i)

print("\n \n \n \t \t ***Display MY Data ****")
for i in arr:
    print(i)

d="dipanshu",12,54,6,45,87655,6676,7654
print(d[2])
# d[3]="hii"
print(d)
e=["hii","hpoi",234,87]
print(e)
e[1]="hello"
print(e)
print("\n\n")
print(d[::3])
print(d[:-2:2])


