#include <iostream>
#include <string>
#include <stdlib.h>
#include "headerone.h"
using namespace std; // namespace defines the scope or resolves identifier name conflicts
// we can define the class in a header file to ensure encapsulation.
// class Classtwo is defined in a separate headerfile

class Classone // we have now declared a class , we'll define it . Its name starts with capital

{ // class is a datatype
private : // we need not specifically write private as members of class are by default private
    int aNumbr; // can be accessed only by member functions of same class
public :
   /* string funZero()
    {
        cout << "//OUR string funZero() WOULD RETURN STRING TYPE,UNLIKE INT WHICH RETURNS INTERGER, i.e return 0"
      return "//ok";
    }
    WE CAN USE STRING FUNCTIONS AS WELL
 */
    void funOne() // we follow camelCase naming
    // would be inline function hence defining outside class is advised
    {
        cout << "funOne called :----declared and defined funOne inside class\n";
    }
    void funTwo();// defined outside

    // Now the static function
    static void funThree()
    {
        cout <<"funThree called:----static function \n";
    }
    void funZero()
    {
        cout << "pointer worked\n";
    }

};
void Classone :: funTwo() // Hence funTwo() belongs to Classone
{
    cout << "funTwo called :----declared funTwo inside class but defined outside\n";
// when we define it outside use {[void(or int )][class] [:: operator] [function name]}
// void has no return type
}

/* class Classtwo IN HEADER FILE  */

class Classthree
{
private :
    int aNumber;
    int aNoOne;
    int aNoTwo;

/*CONSTRUCTORS : have same name as class */
// The don't have a return type and are declared in public only
// TYPES : DEFAULT , PARAMETERISED , COPY
// When an object created then constructor is implicitly invoked
public :
    Classthree() // Default constructor has no parameters/arguments passed
    {
        cout <<"Default constructor invoked implicitly\n";
    }
    Classthree(int aNum) // Parameterised constructor has arguments
    {
    aNumber = aNum; //it won't return anything otherwise it gives error
    }
    int displayOne() // we use display function  to return the value as constructor can't
    {
        return aNumber;
    }
    Classthree(int aNoOne,int aNoTwo) // this is also parameterised constructor
    {
       this-> aNoOne = aNoOne; // int aNoOne , aNoTwo already declared in private
       (*this).aNoTwo = aNoTwo; // a different way to represent this pointer
    /* WE USE 'this' POINTER TO IDENTIFY DATA MEMBERS IN CLASS AND SEPARATE THEM FROM ARGUMENTS IN FUNCTION IF BOTH HAVE SAME NAME */
    }
    int displayTwoA()
    {
        return aNoOne;

    }
    int displayTwoB()
    {
        return aNoTwo;

    }
    /*WE RETURNED <aNoOne , aNoTwo> SEPARATELY , AS A FUNCTION CAN RETURN ONLY <ONE VALUE> */

};

class Classfour // for copy constructor (used to copy contents from one object to another
{
private :
    string aName;
    string bName ;
    string num; // when we have a combination of int and strings then we can use string function to club the return types
public :
    Classfour(string aName , string bName, string num )
    {
        //parameterised constructor
        this-> aName = aName;
        this-> bName = bName;
        this-> num = num;
    }
    string getDetails();

    Classfour(Classfour &a_ref_Pointer); // syntax for copy constructor and we use a reference &ref_Pointer


};
string Classfour::getDetails()
{
    return aName+"\n"+bName+"\n"+num+"\n";
}

/*COPY CONSTRUCTOR USER DEFINED*/
Classfour :: Classfour( Classfour &a_ref_Pointer) // syntax
    {
        cout<<"User Defined copy constructor called\n";
        this->aName= "Suraj -user defined copy constructor\n";
        this->bName= "V -user defined copy constructor\n";
        this->num= "19 -user defined copy constructor\n";
    }

class Classfive
{
    string name_;
    string no_;
public :
    Classfive(string name_,string no_)
    {
        this->name_=name_;
        this->no_=no_;
    }
   string displayFun()
    {
        cout<<"Compiler defined copy constructor\n";
        return name_+"\n"+no_+"\n";
    }
    ~Classfive() /*DESTRUCTOR IS DEFINED IN PUBLIC AND IT DOES NOT TAKE ARGUMENTS AND HAS NO RETURN TYPE .
    IT CAN'T BE DECLARED static */
    {
        cout<<"Destructor called\n";
   // Here destructor would be called twice as there are two objects destroyed in class Classfive
    }
};
int main()
{
system("cls"); // to clear screen in c++

    /* class Classone */

Classone objOne; // camelCase
Classone objTwo; // Two objects :objOne , objTwo
Classone *obj = new Classone() ; // IN CASE OF POINTER WE USE 'new' KEYWORD
objOne.funOne(); // we use '.' operator to access the functions
objTwo.funTwo();
Classone::funThree();// to call static function . we don't need an object to access it
obj->funZero(); // POINTER IS ACCESSING SO USE '->'

/* class Classtwo*/ // in header file

Classtwo objectOne;// THIS OBJECT objThree IS IN A DIFFERENT CLASS DECLARED IN HEADER FILE
objectOne.functionOne(); // this function is in Classtwo in our header file "headerone.h"

// FROM HERE WE USE THE CONSTRUCTORS IN OUR NEXT CLASS

/* class Classthree*/

/*DEFAULT CONSTRUCTOR*/
Classthree oOne;
// hence the moment object oOne created default constructor invoked implicitly
/*PARAMETERISED CONSTRUCTOR*/
Classthree oTwo(5); // value 5 passes to the parameterised constructor.If you pass two or more values then ERROR. Also it can't be redeclared
cout<< oTwo.displayOne(); // the value that is returned by displayOne is cout or printed
Classthree oThree(4,7); // HERE WE HAVE USED A CONCEPT OF 'this' POINTER
cout<< oThree.displayTwoA();// here cout would display or print whatever is returned by the function
cout<< oThree.displayTwoB();
/*THE ABOVE IS A CASE OF CONSTRUCTOR OVERLOADING AS CONSTRUCTOR HAS BEEN USED TWICE WITH DIFFERENT ARGUMENTS PASSED */

/*PLEASE REFER class Classfive to learn about compiler defined Constructor then learn about user defined constructor
// Also learn about destructor in class Classfive

/* COPY CONSTRUCTOR(USER DEFINED ) */
// COPY CONSTRUCTOR IS AUTOMATIACLLY CREATED BY THE COMPILER IF WE DON'T CREATE IT
/*TO CHECK COMPILER CREATED COPY CONSTRUCTOR , CHECK <Classfive>
IN THIS CLASS WE HAVE MADE OUR OWN CONSTRUCTOR */
/*WHEN AN OBJECT IS PASSED AS AN ARGUMENT IN ANOTHER OBJECT THEN THE CONTENTS ARE AS IT IS COPIED IF
WE DON'T CREATE OUR OWN(USER-DEFINED) COPY CONSTRUCTOR */

/* class Classfour */

Classfour oA("myNameA","myNameB","18"); // arguments passed to the parameterised constructor
/*HERE OBJECT IS PASSED AS AN ARGUMENT , WE HAVE MADE OUR OWN COPY CONSTRUCTOR , IF WE DON'T CREATE OUR OWN THEN COMPILER WILL DEFINE ONE*/
Classfour oB(oA); // <or> Classfour oB = oA;
cout<< oA.getDetails();
cout<< oB.getDetails();

/*TO LEARN ABOUT COMPILER DEFINED CONSTRUCTOR */
//so here the compiler would automatically create own constructor so obj_B would be having the same contents as that of obj_A
// HENCE YOU MAY OBSERVE THAT WHEN cout IS USED FOR BOTH obj_A AND obj_B THE ARGUMENTS THAT ARE PASSED ARE PRINTED TWICE
// IF YOU WANT TO PRINT SOMETHING ELSE FOR obj_B THEN YOU DEFINE YOUR OWN COPY CONSTRUCTOR THAT IS DISCUSSED EARLIER

/*class Classfive*/

Classfive obj_A("nameA","20");
Classfive obj_B(obj_A);
cout<<obj_A.displayFun();
cout<<obj_B.displayFun();
/*NOW IN CASE OF DESTRUCTOR YOU DON'T NEED AN OBJECT . DESTRUCTOR DESTROYS THE OBJECT ONCE OBJECT HAS BEEN USED <OR>
DESTRUCTOR IS THE LAST FUNCTION THAT WORKS IN THE LIFETIME OF THE OBJECT*/
// YOU MAY SEE A cout MESSAGE
}

/*WE WOULD LEARN ABOUT OPERATOR OVERLOADING NEXT */
