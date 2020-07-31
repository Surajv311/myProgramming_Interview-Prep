string="surajV"
stringA="jrkre98ty"
stringB="tuu 89 "
# boolean characters in python - true & false
print(string.isalpha())
"""isalpha fun would check for only the characters 
in your input without spaces and returns a boolean value"""
print(stringA.isalnum())
"""isalnum fun would check for either characters or numbers
in your input without spaces and returns a boolean value"""
print(stringB.isalpha())
print(stringA.endswith("ty"))#checks if string ends with with given input , returns bool value
print(string.count("s"))# counts the number of charaters in your string
#can be used to count even integers
print(string.capitalize())# would capitalize the first character of the string
# now to search the index of a character ...
print(stringA.find("k"))
print(string.upper())# would convert entire string to uppercase
print(string.lower())# would convert entire string to lower case
#now to replace
print(stringA.replace("kre","rte"))
b = string
print(b)