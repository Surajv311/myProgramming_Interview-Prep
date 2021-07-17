////////////////////////////////////////////////////////
QUESTION : LEETCODE
////////////////////////////////////////////////////////

/*
146. LRU Cache
Medium

9225

364

Add to List

Share
Design a data structure that follows the constraints of a Least Recently Used (LRU) cache.

Implement the LRUCache class:

LRUCache(int capacity) Initialize the LRU cache with positive size capacity.
int get(int key) Return the value of the key if the key exists, otherwise return -1.
void put(int key, int value) Update the value of the key if the key exists. Otherwise, add the key - value pair to the cache. If the number of keys exceeds the capacity from this operation, evict the least recently used key.
The functions get and put must each run in O(1) average time complexity.


Example 1:

Input
["LRUCache", "put", "put", "get", "put", "get", "put", "get", "get", "get"]
[[2], [1, 1], [2, 2], [1], [3, 3], [2], [4, 4], [1], [3], [4]]
Output
[null, null, null, 1, null, -1, null, -1, 3, 4]

Explanation
LRUCache lRUCache = new LRUCache(2);
lRUCache.put(1, 1); // cache is {1=1}
lRUCache.put(2, 2); // cache is {1=1, 2=2}
lRUCache.get(1);    // return 1
lRUCache.put(3, 3); // LRU key was 2, evicts key 2, cache is {1=1, 3=3}
lRUCache.get(2);    // returns -1 (not found)
lRUCache.put(4, 4); // LRU key was 1, evicts key 1, cache is {4=4, 3=3}
lRUCache.get(1);    // return -1 (not found)
lRUCache.get(3);    // return 3
lRUCache.get(4);    // return 4


Constraints:

1 <= capacity <= 3000
0 <= key <= 104
0 <= value <= 105
At most 2 * 105 calls will be made to get and put.


NOTE...GFG:

Company Tags
 Adobe Amazon Flipkart Goldman Sachs Hike MakeMyTrip Morgan Stanley Ola Cabs OYO Rooms Paytm Samsung Snapdeal Visa Walmart Yahoo Zoho Microsoft Google


*/


////////////////////////////////////////////////////////
ANS
///////////////////////////////////////////////////////

/*

LRU CACHE->Least Recently Used Cache
How it Works:

______________
| ___ | ____ | ___ |   < ------Cache Size = 3

Initially Empty.
Let Our Page requests be [1, 3, 4, 5, 3].

1 is not present in the cache so its a cache miss. It get placed inot the cache.
        __ __ ____ ____
        | _____ | ____ | __1_ |  < ------1 gets place at the back of the cache.

similarly 3 and 4 are cache misses and will be the placed into the cache.

        __ __ ____ ____
        | __4__ | __3_ | __1_ |  < ------3 and 4 gets place at the successive order of the cache.

Now when 5 comes in it again a cache miss but there is no locaction to place it.
Here the actual working of the LRU algorithm works.
It removes the LEAST RECENTLY USED element i.e the leftmost element.

        __ __ ____ ____
        | __5__ | _4__ | __3_ |  < ------5 gets place at the front of the cache and 3 and 4 gets shifted to the right.

Now when 3 comes in its not a cache miss. but it is going to be recently used.The recently used elements
are present at the leftmost side. so we shift all the elements to the left and place 3 at the leftmost location.

        __ __ ____ ____
        | __3__ | __5_ | __4_ |  < ------3 gets place at the front of the cache.


So we can sum up and write the algorithm as such

For get function
1. If the element is not found we return -1.
2. If found we erase that element by making sure the relative locations of the other elements are intact.

For put function
1. If the element is found in the cache we erase it and put it back to the front(as it becomed the most recently used element).
2. If the element is not found there are 2 cases to look for :
Case 2a : if the cache size if full erase the last element and place the new element at the front of the cache.
Case 2b: if the cache size is not full we simply place the element at the right location of the previously recently used element.

*/

class LRUCache {
private:
    int cache_size;
    deque<int> cache;
    unordered_map<int, int> map;
public:
    LRUCache(int capacity) {
        cache_size = capacity;
        cache.clear();
        map.clear();
    }

    int get(int key) {
        if (map.find(key) == map.end())return -1;
        deque<int>::iterator it = cache.begin();
        while (*it != key)
        {
            it++;
        }
        cache.erase(it);
        cache.push_front(key);
        return map[key];
    }

    void put(int key, int value) {
        if (map.find(key) == map.end())
        {
            if (cache_size == cache.size())
            {
                int last = cache.back();
                cache.pop_back();
                map.erase(last);
            }
        }
        else
        {
            deque<int>::iterator it = cache.begin();
            while (*it != key)it++;
            cache.erase(it);
            map.erase(key);
        }
        cache.push_front(key);
        map[key] = value;
    }
};


/*

OR USING STRIVER'S METHOD...

/////////////////////////////////////////////////////////////

class LRUCache {
public:
    class node {
        public:
            int key;
            int val;
            node* next;
            node* prev;
        node(int _key, int _val) {
            key = _key;
            val = _val;
        }
    };

    node* head = new node(-1,-1);
    node* tail = new node(-1,-1);

    int cap;
    unordered_map<int, node*>m;

    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }

    void addnode(node* newnode) {
        node* temp = head->next;
        newnode->next = temp;
        newnode->prev = head;
        head->next = newnode;
        temp->prev = newnode;
    }

    void deletenode(node* delnode) {
        node* delprev = delnode->prev;
        node* delnext = delnode->next;
        delprev->next = delnext;
        delnext->prev = delprev;
    }

    int get(int key_) {
        if (m.find(key_) != m.end()) {
            node* resnode = m[key_];
            int res = resnode->val;
            m.erase(key_);
            deletenode(resnode);
            addnode(resnode);
            m[key_] = head->next;
            return res;
        }

        return -1;
    }

    void put(int key_, int value) {
        if(m.find(key_) != m.end()) {
            node* existingnode = m[key_];
            m.erase(key_);
            deletenode(existingnode);
        }
        if(m.size() == cap) {
          m.erase(tail->prev->key);
          deletenode(tail->prev);
        }

        addnode(new node(key_, value));
        m[key_] = head->next;
    }
};

//Your LRUCache object will be instantiated and called as such:
// LRUCache* obj = new LRUCache(capacity);
//int param_1 = obj->get(key);
//obj->put(key,value);
//


*/












