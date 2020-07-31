# we know that
a1 = [] # list type
a2 = () # tuple type
a3 = {} # dictionary type
#DICTIONARY HOLD KEY:VALUE PAIR UNLIKE OTHER WHICH HOLD ONLY ONE VALUE
# dictionary is a data type
print(type(a1))
print(type(a2))
print(type(a3))
a = {"dssd":"dhuks","fjdks":"jfld","hdks":"jdsl",89:"329","43":"32fe"} # dictionary
print(a["dssd"])
print(a)
del a[89] # del would delete
del a["43"]
print(a)
""" its important to use .copy function as if you put say b=a (b becomes a pointer)and
 then if you do any changes on b then a would also change , to avoid that..."""
a.update({"jdlsj":"dwiod"})
print(a)
print(a.keys()) #left keys & right items in dictionary
print(a.items())
#update for dictionary & insert in list and add in set()