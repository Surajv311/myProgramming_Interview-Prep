///**************////////////////////**************///

/*

// FRIEND CLASS IMPLEMENTATION ...

class A {

	int x ;

	friend class B;

public:

	A(int x) {
		this->x = x;
	}

	void display() {
		cout << x << endl;
	}

};


class B {

	int y;
public:

	B(int y) {
		this->y = y;
	}

	void display() {
		cout << y << endl;
	}

	void update(A& ref, int a) {
		ref.x = a;
	}

};

*/

// FRIEND FUNCTION IMPLEMENTATION...

class A;

class B {

	int y;
public:


	B(int y) {
		this->y = y;
	}

	void display() {
		cout << y << endl;
	}

	void update(A&ref, int a);

};

class A {

	int x ;

public:


	A(int x) {
		this->x = x;
	}

	void display() {
		cout << x << endl;
	}

	friend void B:: update(A& ref, int a);

};



void B:: update(A&ref, int a) {
	ref.x = a;
}


int32_t main() {
///////////
//	c_p_c();
///////////
	_IOS
//////////

	// code

// FRIEND CLASS IMPLEMENTATION TO UPDATE VALUES...

	// A obj1(10);

	// obj1.display();


	// B obj2(20);

	// obj2.display();
	// obj2.update(obj1, 99);

	// obj1.display();


// FRIEND FUNCTION IMPLEMENTATION TO UPDATE VALUES...
	A obj1(10);

	obj1.display();

	B obj2(20);

	obj2.display();

	obj2.update(obj1, 99);

	obj1.display();


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

///**************////////////////////**************///



/*
// code by: srj_v //
*/
