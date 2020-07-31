"""FILE IO BASICS
r - open file for reading - default mode
w - open file for writing
x - create file if not exist
a(append) - add more contents to a file
t - text mode - default mode
b - binary mode
+ - read and write (to update our file)
"""
#DEFAULT FUNCTIONS :<>.read()|<>.close()|<>.write()|<>.readline()|<>.readlines()|
#NOW LET US READ A FILE
#CONSIDER OUR FILE AS fileio.txt
#NOW
#******open() & read() FUNCTION******
# SAY WE CREATE A fileio.txt , NOW :
f = open("fileio.txt")#open would return a file pointer
g = open("fileio.txt","r") # r mode = read , rt - read text , rb = read binary
#if you put "w" mode then it would error
a = f.read()#now the whole file would be read and stored in a ***IN CASE f.red(12) THEN 12 CHARACTERS WOULD BE READ
b = g.read()
print(a)
print(b)
f.close() #IT IS MUST TO CLOSE A FILE TO RELEASE THE MEMORY
g.close()
# now if you want to read line by line in the text then :
print("\n\n\n")

h = open("fileio.txt","r")
i = h.read() #when you read then file pointer becomes empty
#say if you want to read characters
"""so what happens is i has read the file which was opened so if
 you try to print line_ in i you get ALL characters printed"""
for line_ in i:
    print(line_) # hence prints character by character
#so now if you just open the file and not read it then you can print line by line
#there would be \n automatically in the output , its actually because of the function
q = open("fileio.txt","r")
for line__ in q:
    print(line__) #sentencs would be printed , as the txt file has been just opened and not read
# readline() FUNCTION
m = open("fileio.txt","r")
print(m.readline())
print(m.readline())
#you can print the last using readline() again
h.close()
q.close()
m.close()

#readlines() FUNCTION
# it prints a <list> of lines
n = open("fileio.txt","r")
print(n.readlines())
n.close()