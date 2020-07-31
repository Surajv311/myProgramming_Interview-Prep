#include <iostream>
using namespace std ;
// we are defining a class in our header file
class Classtwo
{
public :
    int functionOne(); // declaring functionOne inside class

};
int Classtwo::functionOne() // defining functionOne outside class
{
    cout << "functionOne is called(in header file)\n";
    return 0 ; // since function is int type it would return 0 ; void returns nothing
}
