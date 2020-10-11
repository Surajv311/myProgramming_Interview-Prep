// Maps are a part of the C++ STL.
// Maps are associative containers that store elements
// formed by a combination of a key value and a mapped value,
// following a specific order.The mainly used member functions of maps are:

// Map Template:
// std::map <key_type, data_type>

// Declaration:
// map<string,int>m;
// //Creates a map m where key_type is of type string and data_type is of type int.

// Size:
// int length=m.size();
// //Gives the size of the map.

// Insert:
// m.insert(make_pair("hello",9));
// //Here the pair is inserted into the map where the key is "hello" and the value associated with it is 9.

// Erasing an element:
// m.erase(val);
// //Erases the pair from the map where the key_type is val.

// Finding an element:
// map<string,int>::iterator itr=m.find(val);
// //Gives the iterator to the element val if it is found otherwise returns m.end() .
// Ex: map<string,int>::iterator itr=m.find("Maps");
// //If Maps is not present as the key value then itr==m.end().

// Accessing the value stored in the key:
// To get the value stored of the key "MAPS" we can do m["MAPS"] or we can get the iterator using the find function and then by itr->second we can access the value.
