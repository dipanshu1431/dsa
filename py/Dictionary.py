# #decliration of dictionary
# #type 1
a={1:"Dipanshu",2:"ashish",3:"hello",4:"ram",}
# #type 2
b={"name":"Dipanshu","DOB":"19-11-2003","address":"GAYA"}
#type 3
A=dict(name="Dipanshu",Age="19")
# #call dect
print(a)
print(b)
print(A)
# #type of dect
print(type(a))
print(type(b))
print(type(A))
# #call some space value
print(a[1])
print(b["name"])
print(A["Age"])
B={"hii":"name","hii":"roll"} #update valu print
# print(B["hii"])
# A.pop("name")
A.get("hello","world")
print(A)
# A.clear()
print(A)
car = { "brand": "Ford","model": "Mustang","year": 1964
}

# x = car.get("price", 15000)
x=car.copy()
print(x)
print(car)

# method of dect

# clear()	Removes all the elements from the dictionary
# copy()	Returns a copy of the dictionary
# fromkeys()	Returns a dictionary with the specified keys and value
# get()	Returns the value of the specified key
# items()	Returns a list containing a tuple for each key value pair
# keys()	Returns a list containing the dictionary's keys
# pop()	Removes the element with the specified key
# popitem()	Removes the last inserted key-value pair
# setdefault()	Returns the value of the specified key. If the key does not exist: insert the key, with the specified value
# update()	Updates the dictionary with the specified key-value pairs
# values()	Returns a list of all the values in the dictionary

set = {"dipanshu", 10, 15.9, True, "hello wold"}
print(set)
