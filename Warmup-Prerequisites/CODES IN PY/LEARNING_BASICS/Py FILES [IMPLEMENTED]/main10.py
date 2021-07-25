list1 = [ ["Harry", 1], ["Larry", 2],
          ["Carry", 6], ["Marie", 250]]
dict1 = dict(list1) # dict means dictionary
#dict is built in function
for item_s in dict1:
     print(item_s)
for item_, lollypop in dict1.items(): # items method to return list with dictionary keys
    print(item_, "and lolly is ", lollypop)
items = [int, float, "HaERRY", 5,3, 3, 22, 21, 64, 23, 233, 23, 6]

for item in items:
    if str(item).isnumeric() and item>=60:
        print(item)

