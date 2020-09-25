
int arr[] = {};
int key = 7 ;
int size = sizeof(arr) / sizeof(int);


auto it = find(arr , arr + size , key);
cout << "index is " << it - arr << endl;


bool x = binary_search(arr , arr + size , key);
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



