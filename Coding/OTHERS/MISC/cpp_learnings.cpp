
/*

Note on pointers in cpp:

    int a = 5 ;
    int *p = &a ;
    int **p2 = &p ;

    ct(a); // prints value of a
    ct(p); // prints address of a
    ct(&a); // address of a
    ct(*p); // value p is pointing to
    ct(p2); // address of pointer p
    ct(*p2); // giving address of a
    ct(**p2); // giving value

*/


// ways to initialize an array to 0
int a[100];
// a[0] will be some garbage value, but rest all will be 0's.

/*
Initialising with 0
*/

// Static way of initialisation
int a[100] = {0}; // all elements will be 0

// Or use #define to define the size of array.
#define size 10000
int b[size] = {0}; // All elements will be 0 in this case too

// The following doesn't work
int n = 100;
int c[n] = {0};  // error: variable-sized object may not be initialized
/*
Initialising with some other value (say 15)
*/

// The following doesn't work
int a[100] = {15}; // a[0] will be 15, but rest all values will be 0

// Use for loop to initialise
int a[100];
for (int i = 0; i < 100; i++)
    a[i] = 15;

// Initialisation won't affect the time complexity, since O(n) loops are lightning fast

//////////////////////////////////////////////////////

you could use a vector, which initializes all elements to 0 by default.

vector<int> v(size);

//////////////////////////////////////////////////////

memset(array, 0, sizeof(array));

here all the elements of the array will be initialized to 0
you can also set the number of bytes you want to initialize (from the starting of the array)
something like this

memset(array, 0, n * sizeof(arr[0]));

will initialize first n elements to 0

note-> you have to add the header <memory.h> or <string.h> in order to use memset function!

////////////////////////////////////////////////////////