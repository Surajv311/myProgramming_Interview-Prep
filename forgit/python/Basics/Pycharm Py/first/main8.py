s = set() # set is a data structure ~ collection of well defined objects
print(type(s))
# let us print a set from list
sA_ = set([9,2,7])
print(sA_)
# SET CAN RETAIN VALUES
# TO ADD ELEMENT IN SET
sA_.add(8)
sA_.add(9) # like append in list
print(sA_) # hence 9 not added again - thats the unique property of set
#Now lets consider our set 's' we will fill the set by add function
s.add(8)
s.add(7)
# since s = set()
s2 = set().union({3,6,9})
s3 = s.intersection([3,6,8,9]) # you may use ({})
print(s,s2,s3)
sa = {2,4,5,6}
sb = {7,3,4,8}
print(sa.isdisjoint(sb)) # to check if set sa and sb are disjoint