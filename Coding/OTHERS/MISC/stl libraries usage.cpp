
////////////////////////////////////////////////////////////////////

//STRINGS:

// various constructor of string class

string str1("first string");

// initialization by another string
string str2(str1);

// initialization by character with number of occurrence
string str3(5, '#');

// initialization by part of another string
string str4(str1, 6, 6); //    from 6th index (second parameter)
// 6 characters (third parameter)

// initialization by part of another string : iterator version
string str5(str2.begin(), str2.begin() + 5);

cout << str1 << endl;
cout << str2 << endl;
cout << str3 << endl;
cout << str4 << endl;
cout << str5 << endl;

//  assignment operator
string str6 = str4;

// clear function deletes all character from string
str4.clear();

int len = str6.length(); // Same as "len = str6.size();"

cout << "Length of string is : " << len << endl;

// a particular character can be accessed using at /
// [] operator
char ch = str6.at(2); //  Same as "ch = str6[2];"


cout << "third character of string is : " << ch << endl;

//  front return first character and back returns last character
//  of string

char ch_f = str6.front();  // Same as "ch_f = str6[0];"
char ch_b = str6.back();   // Same as below
// "ch_b = str6[str6.length() - 1];"

cout << "First char is : " << ch_f << ", Last char is : "
     << ch_b << endl;

// c_str returns null terminated char array version of string
const char* charstr = str6.c_str();
printf("%s\n", charstr);

// append add the argument string at the end
str6.append(" extension");
//  same as str6 += " extension"

// another version of append, which appends part of other
// string
str4.append(str6, 0, 6);  // at 0th position 6 character

cout << str6 << endl;
cout << str4 << endl;

//  find returns index where pattern is found.
//  If pattern is not there it returns predefined
//  constant npos whose value is -1

if (str6.find(str4) != string::npos)
    cout << "str4 found in str6 at " << str6.find(str4)
         << " pos" << endl;
else
    cout << "str4 not found in str6" << endl;

//  substr(a, b) function returns a substring of b length
//  starting from index a
cout << str6.substr(7, 3) << endl;

//  if second argument is not passed, string till end is
// taken as substring
cout << str6.substr(7) << endl;

//  erase(a, b) deletes b characters at index a
str6.erase(7, 4);
cout << str6 << endl;

//  iterator version of erase
str6.erase(str6.begin() + 5, str6.end() - 3);
cout << str6 << endl;

str6 = "This is a examples";

//  replace(a, b, str)  replaces b characters from a index by str
str6.replace(2, 7, "ese are test");

cout << str6 << endl;

string s ;
cin >> s ;
cout << s[0] << s.size() << endl ; // you can also use s.length()

char str[] = "Hi";
cout << strlen(str) << endl;

if (isupper(s[0]))
    count++;//////////////////

string su = "Hello";
transform(su.begin(), su.end(), su.begin(), ::tolower);
cout << su << endl;


char arr[] = "Hello";
for (int x = 0; x < strlen(arr); x++)
    putchar(tolower(arr[x]));


////////////////////////////////////////////////////////////////////


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


////////////////////////////////////////////////////////////////////
ct(sqrt(40)); // square root
ct(cbrt(x)); // cube root
ct(floor(2.343)); // similarly ceil()
ct(abs(x)) ; // absolute
ct(hypot(x, y)) ; // hypotneuse
ct(cos(x)); // similarly exp(x)
ct(acos(x)); // arc cos
////////////////////////////////////////////////////////////////////

// defining 2D vector matrix of m*n
vector<vector<int>> matrix (n, vector<int>m);
// to initialise you may: vector<int>(m,0)... inside...


////////////////////////////////////////////////////////////////////

The map::count() is a built - in function in C++ STL
which returns 1 if the element with key K is
present in the map container.

Syntax: map_name.count(key k)


////////////////////////////////////////////////////////////////////

    vect.push_back(make_pair(arr[i], arr1[i]));
for (int i = 0; i < n; i++)
{
    cout << vect[i].first << " "
         << vect[i].second << endl;
}

////////////////////////////////////////////////////////////////////


An example of iterating backward through a std::map:

#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, std::string> m;
    m["a"] = "1";
    m["b"] = "2";
    m["c"] = "3";

    for (auto iter = m.rbegin(); iter != m.rend(); ++iter) {
        std::cout << iter->first << ": " << iter->second << std::endl;
    }
}

//-> rbegin(),rend()... in vectors/sets/maps....


////////////////////////////////////////////////////////////////////








