#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std ;
/*WE USE virtual IN CASE OF FUNCTION OVERRIDING >> SAME PARAMETER && OCCURS IN DIFFERENT CLASSES&& IS -A RELATION */
// virtual USED FOR LATE BINDING and RUNTIME POLYMORPHISM
// virtual functions should be accessed using pointers
class Virtual_one
{
public :
    int fun_One()
    {
    cout<<"fun_One works in v1\n";
    }
};
class Virtual_two : public Virtual_one
{
public :
    int fun_One()
    {
        cout<<"fun_One works in v2\n";
    }
   virtual int fun_()
    {
        cout<<"fun_ works in v2\n";
    }
};
class Virtual_three : public Virtual_two
{
    int fun_()
    {
        cout<<"fun_works in v3\n";
    }
};
int main()
{
    Virtual_one objA;
    Virtual_two objBA , *objBB = new Virtual_two();
    Virtual_three objC;
    objBB = &objC; // objBB pointer of Virtual_two carries address of objC
    objA.fun_One(); // fun_One of Virtual_one would be accessed as objA is of that class
    objBA.fun_One();// fun_One of Virtual_two would be accessed as objBA is of that class

    /* NOW CONSIDER THIS CASE WHICH MAYBE SIMILAR LIKE ABOVE BUT HERE WE FIND USE OF virtual*/

    objBB->fun_(); /*fun_ function is in Virtual_two and Virtual_three classes */
    /*
    HERE objBB pointer(of Virtual_two class) CARRIES ADDRESS OF objC(of Virtual_three class){//so pointer object of a class and address of other object which is of different class but both classes have a common function//}
    So in objBB->fun_(); THE fun_() of Virtual_two class WOULD WORK AS objBB pointer BELONGS TO THAT CLASS .
    BUT THE MOMENT YOU PUT VIRTUAL TO IT : THE fun_() OF Virtual_three class WOULD WORK. WE HAVE ADDED virtual...*/

}
