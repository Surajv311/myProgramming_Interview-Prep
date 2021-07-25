string="suraj V"
print(string)
print(string[4])
print(string[1:3])# 1 to 3 is the index number that you want to print i.e range ...
print(len(string))
# now to skip a character while printing
print(string[1:5:2])# here 2 would skip 2 characters
#now if we put negative indices then also it would work ...
#it is sort of cyclic
#i.e s=[0] , u=[1] ... so V = [6] = [-1]... and so on
print(string[-5:5])