# NOW WE LEARN ABOUT writing AND appending TO A FILE
f = open("fileio2.txt","w") # if you "r" then you get error as we have not created it
#to create we used "w" and now we input
k = f.write("hi bro ")

#print(k) # would print the size of string as it is in write mode.
# had it been in read mode it would have printed what we had input

f.close()
# so now we have input our string in it
# NOW LETS append
g = open("fileio3.txt","a") # we can create txt file by "a" also
x = g.write("<append>")
print("we would get the size of the string in fileio3.txt:",x)
g.close() # now it would keep on printing <> if you run the program again and again since its append
#thats the difference between append mode (again and again) and write mode (once)

# to read and write both we use "r+"
# hence we get rid of the tension of using "w" or "r" again and again
# we are not appending

h = open("fileio3.txt","r+")
z = h.read()
print(z)
h.write("<we have used r+>")# would write <> in the fileio3.txt
#we may print the updated .txt file if we wnat to
