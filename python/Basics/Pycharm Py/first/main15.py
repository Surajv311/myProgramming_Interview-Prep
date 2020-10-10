#EXCEPTION HANDLING
print("a is")
a = (input()) # hence input would go as a string
print("b is")
b = (input())
"""print("the value is \n",int(a)+int(b))
print("exception handled 1 ")"""
#NOW *****SUPPOSE***** YOU PUT <CHAR> AS YOUR INPUT (ABOVE) THEN IT WOULD GIVE ERROR , AS int(a)+int(b) GIVES int .
#BECAUSE OF THIS ERROR OUR NEXT PRINT STATEMENT<we have handled the exception> WOULD NOT BE PRINTED
#TO BYPASS THIS ERROR WE DO THE EXCEPTION HANDLING
try:
    print("the value is \n",int(a)+int(b))
except Exception as eh_:#can be any name
    print(eh_)#now the exception/error would be printed as a string and we have bypassed it and now we can proceed to next statement
print("exception handled 2")
