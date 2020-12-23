
int arr[] = {};
int key = 7 ;
int size = sizeof(arr) / sizeof(int);


auto it = find(arr , arr + size , key);
cout << "index is " << it - arr << endl;


bool x = binary_search(arr , arr + size , key); // binary search is done in a sorted array
if (x) {cout << "present" << endl;}
// to find frequency of an element in the array
auto it = lower_bound(arr , arr + size , 7); // returns index of number '>=' to the searched number
cout << "address of it " << it << endl;
auto it2 = upper_bound(arr , arr + size , 7); // returns index of number '>' than the number searched
cout << "address of it2 " << it2 << endl;
cout << "frequency " << it2 - it << endl;


sort(arr , arr + size);
for (int i = 0 ; i < size ; i++)
	cout << arr[i] << " " ;

//use comparators for reversing
bool comparator(int a , int b) {return a > b;}
sort(arr , arr + size , comparator);
//then print


rotate(arr , arr + 5 , arr + size);
//then print


cout << "max: " << max(a, b) << endl;
cout << "min: " << min(a, b) << endl;


reverse(arr , arr + n);
// then print


next_permutation(arr, arr + n);
// then print



int maxElement = *max_element(arr, arr + n);
// to find max element in an array

int sum = accumulate(arr, arr + n, sum); // to find sum of entire array elements
// then ct(sum);

ct(sqrt(40)); // square root
ct(cbrt(x)); // cube root
ct(floor(2.343)); // similarly ceil()
ct(abs(x)) ; // absolute
ct(hypot(x, y)) ; // hypotneuse
ct(cos(x)); // similarly exp(x)
ct(acos(x)); // arc cos


// defining 2D vector matrix of m*n
vector<vector<int>> matrix (n, vector<int>m);
// to initialise you may: vector<int>(m,0)... inside...