/*

C Program to print numbers from 1 to N without using semicolon?
Difficulty Level : Medium
Last Updated : 18 Sep, 2018
How to print numbers from 1 to N without using any semicolon in C.


#include<stdio.h>
#define N 100

// Add your code here to print numbers from 1
// to N without using any semicolon
What code to add in above snippet such that it doesn’t contain semicolon and prints numbers from 1 to N?

We strongly recommend you to minimize your browser and try this yourself first

Method 1 (Recursive)


// A recursive C program to print all numbers from 1
// to N without semicolon
#include<stdio.h>
#define N 10

int main(int num)
{
    if (num <= N && printf("%d ", num) && main(num + 1))
    {
    }
}
Output:



1 2 3 4 5 6 7 8 9 10



Method 2 (Iterative)


// An iterative C program to print all numbers from 1
// to N without semicoolon
#include<stdio.h>
#define N 10

int main(int num, char *argv[])
{
while (num <= N && printf("%d ", num) && num++)
{
}
}
Output:

1 2 3 4 5 6 7 8 9 10

How do these solutions work?
main() function can receive arguments. The first argument is argument count whose value is 1 if no argument is passed to it. The first argument is always program name.


#include<stdio.h>

int main(int num, char *argv[])
{
   printf("num = %d\n", num);
   printf("argv[0] = %s ", argv[0]);
}
Output:

num = 1
argv[0] = <file_name>


--------------------------------------------------------------------

To find sum of two numbers without using any operator
Difficulty Level : Hard
Last Updated : 22 Mar, 2021
Write a program to find sum of positive integers without using any operator. Only use of printf() is allowed. No other library function can be used.
Solution
It’s a trick question. We can use printf() to find sum of two numbers as printf() returns the number of characters printed. The width field in printf() can be used to find the sum of two numbers. We can use ‘*’ which indicates the minimum width of output. For example, in the statement “printf(“%*d”, width, num);”, the specified ‘width’ is substituted in place of *, and ‘num’ is printed within the minimum width specified. If number of digits in ‘num’ is smaller than the specified ‘width’, the output is padded with blank spaces. If number of digits are more, the output is printed as it is (not truncated). In the following program, add() returns sum of x and y. It prints 2 spaces within the width specified using x and y. So total characters printed is equal to sum of x and y. That is why add() returns x+y.


C

#include <stdio.h>

int add(int x, int y)
{
    return printf("%*c%*c", x, ' ', y, ' ');
}

// Driver code
int main()
{
    printf("Sum = %d", add(3, 4));
    return 0;
}
Output:


       Sum = 7
The output is seven spaces followed by “Sum = 7”. We can avoid the leading spaces by using carriage return. Thanks to krazyCoder and Sandeep for suggesting this. The following program prints output without any leading spaces.


C

#include <stdio.h>

int add(int x, int y)
{
    return printf("%*c%*c", x, '\r', y, '\r');
}

// Driver code
int main()
{
    printf("Sum = %d", add(3, 4));
    return 0;
}
Output:


      Sum = 7
Another Method :


C++

#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5;
    if (b > 0) {
        while (b > 0) {
            a++;
            b--;
        }
    }
    if (b < 0) { // when 'b' is negative
        while (b < 0) {
            a--;
            b++;
        }
    }
    cout << "Sum = " << a;
    return 0;
}

--------------------------------------------------------------------

How will you show memory representation of C variables?
Difficulty Level : Hard
Last Updated : 02 Jun, 2017
Write a C program to show memory representation of C variables like int, float, pointer, etc.

Algorithm:
Get the address and size of the variable. Typecast the address to char pointer. Now loop for size of the variable and print the value at the typecasted pointer.

Program:


#include <stdio.h>
typedef unsigned char *byte_pointer;

//show bytes takes byte pointer as an argument
 // and prints memory contents from byte_pointer
 // to byte_pointer + len
void show_bytes(byte_pointer start, int len)
{
     int i;
     for (i = 0; i < len; i++)
           printf(" %.2x", start[i]);
     printf("\n");
}

void show_int(int x)
{
     show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x)
{
     show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x)
{
     show_bytes((byte_pointer) &x, sizeof(void *));
}

int main()
{
    int i = 1;
    float f = 1.0;
    int *p = &i;
    show_float(f);
    show_int(i);
    show_pointer(p);
    show_int(i);
    getchar();
    return 0;
}

--------------------------------------------------------------------

Condition To Print “HelloWord”
Difficulty Level : Easy
Last Updated : 29 May, 2018
What should be the “condition” so that the following code snippet prints both HelloWorld!

      if  "condition"
          printf ("Hello");
      else
          printf("World");
Method 1:


#include<stdio.h>
int main()
{
    if(!printf("Hello"))
        printf("Hello");
    else
        printf("World");
    getchar();
}
Explanation: Printf returns the number of character it has printed successfully. So, following solutions will also work

if (printf(“Hello”) < 0) or if (printf("Hello") < 1) etc



Method 2: Using fork()


#include<stdio.h>
#include<unistd.h>
int main()
{
    if(fork())
        printf("Hello");
    else
        printf("World");
    getchar();
}


--------------------------------------------------------------------

Change/add only one character and print ‘*’ exactly 20 times
Difficulty Level : Medium
Last Updated : 18 Feb, 2021
In the below code, change/add only one character and print ‘*’ exactly 20 times.


int main()
{
    int i, n = 20;
    for (i = 0; i < n; i--)
        printf("*");
    getchar();
    return 0;
}
Solutions:
1. Replace i by n in for loop’s third expression

C

#include <stdio.h>
int main()
{
    int i, n = 20;
    for (i = 0; i < n; n--)
        printf("*");
    getchar();
    return 0;
}
C++

#include <iostream>
using namespace std;
int main()
{
    int i, n = 20;
    for (i = 0; i < n; n--)
        cout << "*";
    getchar();
    return 0;
}

2. Put ‘-‘ before i in for loop’s second expression


C

#include <stdio.h>
int main()
{
    int i, n = 20;
    for (i = 0; -i < n; i--)
        printf("*");
    getchar();
    return 0;
}
C++

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n = 20;
    for (i = 0; -i < n; i--)
        cout<<"*";

    return 0;
}


 3. Replace < by + in for loop’s second expression

c

#include <stdio.h>
int main()
{
    int i, n = 20;
    for (i = 0; i + n; i--)
       printf("*");
    getchar();
    return 0;
}

--------------------------------------------------------------------



--------------------------------------------------------------------



--------------------------------------------------------------------




--------------------------------------------------------------------




--------------------------------------------------------------------



--------------------------------------------------------------------




--------------------------------------------------------------------




--------------------------------------------------------------------




--------------------------------------------------------------------




--------------------------------------------------------------------




--------------------------------------------------------------------




--------------------------------------------------------------------




--------------------------------------------------------------------




--------------------------------------------------------------------



--------------------------------------------------------------------




--------------------------------------------------------------------




--------------------------------------------------------------------



--------------------------------------------------------------------



--------------------------------------------------------------------




--------------------------------------------------------------------




--------------------------------------------------------------------



--------------------------------------------------------------------



--------------------------------------------------------------------



--------------------------------------------------------------------





--------------------------------------------------------------------



--------------------------------------------------------------------







*/