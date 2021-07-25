/*

Can we call an undeclared function in C++?
Difficulty Level : Easy
Last Updated : 09 Aug, 2018
Calling an undeclared function is poor style in C (See this) and illegal in C++. So is passing arguments to a function using a declaration that doesn’t list argument types:

If we save the below program in a .c file and compile it, it works without any error. But, if we save the same in a .cpp file, it doesn’t compile.


#include<stdio.h>

void f(); // Argument list is not mentioned

int main()
{
   f(2); // Poor style in C, invalid in C++
   getchar();
   return 0;
}

void f(int x)
{
   printf("%d", x);
}
Source: http://www2.research.att.com/~bs/bs_faq.html#C-is-subset

--------------------------------------------------------------------


How to access global variable if there is a local variable with same name in C/ C++
Difficulty Level : Basic
Last Updated : 19 Apr, 2021
we can access a global variable if we have a local variable with same name in C using extern.

C

// C Implementation
#include <stdio.h>

int x = 50; // Global x

int main()
{
    int x = 10; // Local x
    {
        extern int x;
        printf("Value of global x is %d\n", x);
    }
    printf("Value of local x is %d\n", x);
    return 0;
}
Output
Value of global x is 50
Value of local x is 10
we can access a global variable if we have a local variable with same name in C++ using scope resolution operator (::).

C++

// C++ Implementation
#include <iostream>

using namespace std;

int x = 50; // Global x

int main()
{
    int x = 10; // Local x
    cout << "Value of global x is " << ::x << endl;
    cout << "Value of local x is " << x;
    getchar();
    return 0;
}
Output
Value of global x is 50
Value of local x is 10


INFO ABOUT THE EXTERN KEYWORD....


Understanding “extern” keyword in C
Difficulty Level : Medium
Last Updated : 16 Nov, 2020
I’m sure this post will be as interesting and informative to C virgins (i.e. beginners) as it will be to those who are well-versed in C. So let me start by saying that the extern keyword applies to C variables (data objects) and C functions. Basically, the extern keyword extends the visibility of the C variables and C functions. That’s probably the reason why it was named extern.
Though most people probably understand the difference between the “declaration” and the “definition” of a variable or function, for the sake of completeness, I would like to clarify them.

Declaration of a variable or function simply declares that the variable or function exists somewhere in the program, but the memory is not allocated for them. The declaration of a variable or function serves an important role–it tells the program what its type is going to be. In case of function declarations, it also tells the program the arguments, their data types, the order of those arguments, and the return type of the function. So that’s all about the declaration.
Coming to the definition, when we define a variable or function, in addition to everything that a declaration does, it also allocates memory for that variable or function. Therefore, we can think of definition as a superset of the declaration (or declaration as a subset of definition).
A variable or function can be declared any number of times, but it can be defined only once. (Remember the basic principle that you can’t have two locations of the same variable or function).
Now back to the extern keyword. First, Let’s consider the use of extern in functions. It turns out that when a function is declared or defined, the extern keyword is implicitly assumed. When we write.

int foo(int arg1, char arg2);
The compiler treats it as:

extern int foo(int arg1, char arg2);
Since the extern keyword extends the function’s visibility to the whole program, the function can be used (called) anywhere in any of the files of the whole program, provided those files contain a declaration of the function. (With the declaration of the function in place, the compiler knows the definition of the function exists somewhere else and it goes ahead and compiles the file). So that’s all about extern and functions.
Now let’s consider the use of extern with variables. To begin with, how would you declare a variable without defining it? You would do something like this:

extern int var;
Here, an integer type variable called var has been declared (it hasn’t been defined yet, so no memory allocation for var so far). And we can do this declaration as many times as we want. So far so good. 🙂
Now, how would you define var? You would do this:



int var;
In this line, an integer type variable called var has been both declared and defined (remember that definition is the superset of declaration). Since this is a definition, the memory for var is also allocated. Now here comes the surprise. When we declared/defined a function, we saw that the extern keyword was present implicitly. But this isn’t the case with variables. If it were, memory would never be allocated for them. Therefore, we need to include the extern keyword explicitly when we want to declare variables without defining them. Also, as the extern keyword extends the visibility to the whole program, by using the extern keyword with a variable, we can use the variable anywhere in the program provided we include its declaration the variable is defined somewhere.
Now let us try to understand extern with examples.
Example 1:


int var;
int main(void)
{
   var = 10;
   return 0;
}
This program compiles successfully. var is defined (and declared implicitly) globally.
Example 2:


extern int var;
int main(void)
{
  return 0;
}
This program compiles successfully. Here var is declared only. Notice var is never used so no problems arise.
Example 3:


extern int var;
int main(void)
{
  var = 10;
  return 0;
}
This program throws an error in the compilation(during the linking phase, more info here) because var is declared but not defined anywhere. Essentially, the var isn’t allocated any memory. And the program is trying to change the value to 10 of a variable that doesn’t exist at all.
Example 4:


#include "somefile.h"
extern int var;
int main(void)
{
 var = 10;
 return 0;
}
Assuming that somefile.h contains the definition of var, this program will compile successfully.
Example 5:


extern int var = 0;
int main(void)
{
 var = 10;
 return 0;
}
Do you think this program will work? Well, here comes another surprise from C standards. They say that..if a variable is only declared and an initializer is also provided with that declaration, then the memory for that variable will be allocated–in other words, that variable will be considered as defined. Therefore, as per the C standard, this program will compile successfully and work.
So that was a preliminary look at the extern keyword in C.
In short, we can say:

A declaration can be done any number of times but definition only once.
the extern keyword is used to extend the visibility of variables/functions.
Since functions are visible throughout the program by default, the use of extern is not needed in function declarations or definitions. Its use is implicit.
When extern is used with a variable, it’s only declared, not defined.
As an exception, when an extern variable is declared with initialization, it is taken as the definition of the variable as well.


--------------------------------------------------------------------


Can we use function on left side of an expression in C and C++?
Difficulty Level : Easy
Last Updated : 29 May, 2017
In C, it might not be possible to have function names on left side of an expression, but it’s possible in C++.


#include<iostream>

using namespace std;

//such a function will not be safe if x is non static variable of it
int &fun()
{
   static int x;
   return x;
}

int main()
{
   fun() = 10;

   // this line prints 10 on screen
   printf(" %d ", fun());

   getchar();
   return 0;
}

--------------------------------------------------------------------

Can we access private data members of a class without using a member or a friend function?
Difficulty Level : Medium
Last Updated : 11 May, 2020
The idea of Encapsulation is to bundle data and methods (that work on the data) together and restrict access of private data members outside the class. In C++, a friend function or friend class can also access private data members.

Is it possible to access private members outside a class without friend?
Yes, it is possible using pointers. See the following program as an example.


#include <iostream>
using namespace std;

class Test {
private:
    int data;

public:
    Test() { data = 0; }
    int getData() { return data; }
};

int main()
{
    Test t;
    int* ptr = (int*)&t;
    *ptr = 10;
    cout << t.getData();
    return 0;
}
Output:
10
Example 2:


//Program to initialize the private members and
//display them without using member functions.

#include <bits/stdc++.h>
using namespace std;

class A {
private:
    int x;
    int y;
};

int main()
{
    A a;
    int* p = (int*)&a;
    *p = 3;
    p++;
    *p = 9;
    p--;
    cout << endl
         << "x = " << *p;
    p++;
    cout << endl
         << "y = " << *p;
}
Output:

x = 3
y = 9
Explanation:
In the above program, a is an object of class A. The address of the object is assigned to integer pointer p by applying typecasting. The pointer p points to private member x. Integer value is assigned to *p, that is, x. Address of object a is increased and by accessing the memory location value 9 is assigned to y. The p– statement sets the memory location of x. Using the cout statement contains of x is displayed.

Example 3:


//Program to initialize and display
//private members using pointers.
#include <bits/stdc++.h>
using namespace std;

class A {
private:
    int x;
    int y;
};

class B : public A {
public:
    int z;

    void show(int* k)
    {
        cout << "x = " << *k << " y = "
            << *(k + 1) << " z = " << *(k + 2);
    }
};

int main()
{
    B b; // object declaration
    int* p; // pointer declaration
    p = &b.z; // address of z is assigned to p
    *p = 3; // initialization of z
    p--; // points to previous location
    *p = 4; // initialization of y
    p--; // points to previous location
    *p = 5; // initialization of x
    b.show(p); // passing address of x to function show()

    return 0;
}
Output:
x = 5 y = 4 z = 3

Note that the above way of accessing private data members is not at all a recommended way of accessing members and should never be used. Also, it doesn’t mean that the encapsulation doesn’t work in C++. The idea of making private members is to avoid accidental changes. The above change to data is not accidental. It’s an intentionally written code to fool the compiler.



--------------------------------------------------------------------


How to make a C++ class whose objects can only be dynamically allocated?
Difficulty Level : Medium
Last Updated : 29 May, 2017
The problem is to create a class such that the non-dynamic allocation of object causes compiler error. For example, create a class ‘Test’ with following rules.


Test t1;  // Should generate compiler error
Test *t3 = new Test; // Should work fine
The idea is to create a private destructor in the class. When we make a private destructor, the compiler would generate a compiler error for non-dynamically allocated objects because compiler need to remove them from stack segment once they are not in use.
Since compiler is not responsible for deallocation of dynamically allocated objects (programmer should explicitly deallocate them), compiler won’t have any problem with them. To avoid memory leak, we create a friend function destructTest() which can be called by users of class to destroy objects.


#include <iostream>
using namespace std;

// A class whose object can only be dynamically created
class Test
{
private:
    ~Test() { cout << "Destroying Object\n"; }
public:
     Test() { cout << "Object Created\n"; }
friend void destructTest(Test* );
};

// Only this function can destruct objects of Test
void destructTest(Test* ptr)
{
    delete ptr;
    cout << "Object Destroyed\n";
}

int main()
{
    // Uncommenting following following line would cause compiler error
    // Test t1;

    // create an object
    Test *ptr = new Test;

    // destruct the object to avoid memory leak
    destructTest(ptr);

    return 0;
}
Output:

Object Created
Destroying Object
Object Destroyed
If we don’t want to create a friend function, we can also overload delete and delete[] operators in Test, this way we don’t have to call a specific function to delete dynamically allocated objects.


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