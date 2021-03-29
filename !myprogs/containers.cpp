/*



A container is a holder object that stores a collection of other objects (its elements). They are implemented as class templates, which allows a great flexibility in the types supported as elements.
The container manages the storage space for its elements and provides member functions to access them, either directly or through iterators (reference objects with similar properties to pointers).
-----------------------------------------------------

Sequence containers
Sequence containers implement data structures which can be accessed sequentially.

array: Static contiguous array (class template)
vector: Dynamic contiguous array (class template)
deque: Double-ended queue (class template)
forward_list: Singly-linked list (class template)
list : Doubly-linked list (class template)

vector - push_back,emplace_back, pop_back, insert, erase , begin/end, front/back, size(n)/resize...rbegin(),rend()...
list- ...., list1.merge(list2)
forward_list - push_front, begin/end, insert_after, remove(n)
deque - pb, eb, empty(), clear, resize......

also , vector<int, int> isn't a good practice, use vector <pair<int, int>>

-----------------------------------------------------

Associative containers
Associative containers implement sorted data structures that can be quickly searched (O(log n) complexity).

Set: Collection of unique keys, sorted by keys
(class template)
Map: Collection of key-value pairs, sorted by keys, keys are unique (class template).
multiset: Collection of keys, sorted by keys (class template)
multimap: Collection of key-value pairs, sorted by keys
(class template)

set- insert()/erase, clear, empty, size, find, count, lower_bound()...rbegin(),rend()...
map: -
for mii - .inser(pii)
for map<int, stack<int>> - m[].push()
... list<int>.. - m[].push_back()
- find(), count() .. for map keys...

//The map::count() is a built-in function in C++ STL
//which returns 1 if the element with key K is
//present in the map container.
//Syntax: map_name.count(key k)

- rbegin(),rend()...

-----------------------------------------------------

Unordered associative containers
Unordered associative containers implement unsorted (hashed) data structures that can be quickly searched (O(1) amortized, O(n) worst-case complexity).

unordered_set: Collection of unique keys, hashed by keys. (class template)
unordered_map: Collection of key-value pairs, hashed by keys, keys are unique. (class template)
unordered_multiset: Collection of keys, hashed by keys (class template)
unordered_multimap: Collection of key-value pairs, hashed by keys (class template)

..........
...

-----------------------------------------------------

Container adaptors
Container adaptors provide a different interface for sequential containers.

stack: Adapts a container to provide stack (LIFO data structure) (class template).
queue: Adapts a container to provide queue (FIFO data structure) (class template).
priority_queue: Adapts a container to provide priority queue (class template).

stack - push,pop, top, empty, size
queues - .... front, back()...
priority_queue() - ~ its a minheap, : push/pop, top, empty, size...
for maxheap - p_q<int, vi , greater<int>> pq....
~ vi is vector<int>...

-----------------------------------------------------



















/*