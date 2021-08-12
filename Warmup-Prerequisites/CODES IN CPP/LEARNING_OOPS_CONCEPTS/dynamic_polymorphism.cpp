/////////////////////////////////////////////////////////

// runtime polymorphism

class A
{
public :
	/*	void fun()
		{
			cout << "fun in A\n";
		}
	*/
	void virtual fun()
	{
		cout << "fun in A\n";
	}
};

class B : public A
{
public :
	void fun()
	{
		cout << "fun in B\n";
	}

};


int32_t main() {
///////////
//	c_p_c();
///////////
	_IOS
//////////


	A *objA = new A();
	B objB;

	objA->fun();
	objB.fun();

	objA = &objB;
	objA->fun();

	/*
		HERE objA pointer(of A class) CARRIES ADDRESS OF objB(of B class)
		so our pointer object is of a certain class and it also
		holds address of another class.
		note that the function fun(), is present in both the classes.
		hence when objA calls fun: PREFERENCE IS GIVEN TO THE
		CLASS IN WHICH THE OBJECT IS OF, SO THE VALUE INSIDE THE fun()
		PRESENT IN CLASS A IS PRINTED.  BUT THE MOMENT
		THE 'virtual' IS PUT INTO THE FUNCTION. Since objA also
		held the address of objB, so the fun() of class B would be
		printed. Hence we can see that the object is displaying
		multiple forms in this condition... virtual keyword...
	*/

	/*
		Late binding(dynamic polymorphism):
		In this, the compiler adds code that identifies
		the kind of object at runtime then matches the call
		with the right function definition.
	*/

// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}