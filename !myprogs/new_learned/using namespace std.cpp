/*
//////////////////////////////////////////////////////
//Question/Info

namespace usage in C++
(using namespace std; or std::)

author: srj_v
//////////////////////////////////////////////////////
*/

#include <iostream>
// using namespace std;

using std::endl;


namespace nspc11 {
int age = 24;
}

namespace nspc22 {
int age = 100;
}

void c_p_c()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

//////////////////////////////////////////////////////


int main() {

// case 1: using std::cout ~ not using namespace std...
	std::cout << "hi ";

// case 2: not using std::endl as std::endl has already been defined on top: using std::endl ...
	std::cout << "ending" << endl;

// case 3: defined our own namespace...
	std::cout << nspc11::age << endl;

	std::cout << nspc22::age << endl;

	/*
	hence we can see that when we use out namespace 'std' then our std,
	actually has all the identifiers like cout, string, float, int,
	predefined, we could create our own namespace to define
	all these.. but why to do that... SO NAMESPACE IS USED TO DIFFERENTIATE
	BETWEEN 2 ENTITIES HAVING SAMENAME... like we saw in case
	of the variable 'int age' which we defined in the 2
	different namespaces...

	we can add 'std::' before statements like cout, string... etc...
	or directly just declare 'using namespace std' once and continue...
	(though in general it is said that using namespace std is
	a bad practice... despite it saving lot of time...)

	//////////////////////////////////////////////////////////////
	FROM GEEKSFORGEEKS:
	Need of namespace:

	As the same name can’t be given to multiple variables, functions, classes, etc. in the same scope.
	So to overcome this situation namespace is introduced.

	//////////////////////////////////////////////////////////////

	*/

// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

//////////////////////////////////////////////////////