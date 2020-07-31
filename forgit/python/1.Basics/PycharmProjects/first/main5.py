# CONSIDER THE FOLLOWING LIST {WE USE []} - MUTABLE
# list is a datatype

x = ["hi","bye","yo","bro",67]
print(x)
print(x[3])
numbers = [4,3,6,7,1,0,5,-1]
numbers.sort() # would sort the numbers from to ascending order
numbers.reverse() # would reverse the above sorted numbers i.e make the order from descending order
print(numbers)
#now lets do slicing
print(numbers[3])
print(numbers[0:4:2])# do not do negative slicing
print(max(numbers))
print(min(numbers))
numbers.append(9)# append would add the number at the end of the array
print(numbers)
numbers.insert(3,7890)
print(numbers)
numbers.remove(7890)
#remove - used to erase the number from list by value i.e a.remove(xyz)
#pop - used to erase the number from list by index number and returns it i.e a.pop(1)
#delete - used to erase the number from list specifically by index i.e use del a[1]
print(numbers)
numbers.pop()#would pop out the last number
print(numbers)
numbers.pop(2)
print(numbers)
# to change value on a list
numbers[3]= 678 # changing the number in that index to 678
print(numbers)
numbers.clear()
print(numbers)
#mutable- can change >>>>>>>LIST
#immutabe - cannot change>>>TUPPLE

#CONSIDER THE FOLLOWING TUPPLE {WE USE ()} - IMMUTABLE
# tuple is a datatype
y = (2,4,2)
print(y)
"""y(1)=8990
print(y)""" # you would get error as value cannot be changed in tupple immutable
y = (1) # this is not a tupple as there is only one element and when you print () is not coming
print(y)
y=(1,)#now becomes a tuple
print(y)
