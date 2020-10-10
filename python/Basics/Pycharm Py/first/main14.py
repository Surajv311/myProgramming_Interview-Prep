#TODAY WE LEARN ABOUT FUNCTIONS
#BUILT IN FUNCTIONS
a = 3
b = 2
c = sum((a,b)) # HERE SUM IS A BUILT IN FUNCTION
print(c)
#print(a+b)
#USER DEFINED FUNCTION
def func():
    print("func function has been used \n")
    #func is not returning anything hence 'None'
x = func()
print(x)
print("\n\n\n")
print(func())
print("\n\n\n")

def fn(y):
    print(y)
    return 0
r = fn(6)
print(r)
print("\n\n\n")


# NOW DOCSTRING
def fun():
    """DOCSTRING eg, WE MAY PUT THE WORKING OF FUNCTION"""
    #SO THAT WHEN THERE ARE MANY FUNCTIONS THEN USEFUL
    #docstring is not a simple comment . It can be shown in the output
    print("docstring example")

print(fun.__doc__)
print(fun())