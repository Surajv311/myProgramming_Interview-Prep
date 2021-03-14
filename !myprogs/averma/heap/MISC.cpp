/*

try to think of heap whenever smallest/largest/top asked in
question... use min heap to get ~largest ... and
max heap for ~smallest...

--------------------------------------------------------

Return K largest Elements in array

Use minheap... since in min heap the element at top
would be the smallest and the ones below would
be larger than that ...push elements in it and then
pop elements from it when heap size > k ...

--------------------------------------------------------

Frequency based sorting

So given arr = {1,1,1,3,2,2,4}
o/p = {1,1,1,1,2,2,3,4}
hence sorted array based on frequency

Logic:
So basically create a map with pii (pair<int,int>) and store the arr
elements along with its count
i.e say map 'mp' -> mp[arr[i]]++ ; and then create a min heap 'minh'
with pii, and push elements with note that pii must:
first-> freq. of elements & second-> arr element ,...
now just print minh.top.second....

----------------------------------------------------------

 K Closest Points To Origin

Given a list of euclidean points on the 2-D plane and an integer k.
The task is to find k closest points to the origin and print them.

Example:
Input : point = [[3, 3], [5, -1], [-2, 4]], K = 2


It is similar application... take a map/unordered_map
with pair<int,pair<int,int>>;... {,{,}}... first-> stores distance
from origin, and second-> stores points (x,y). now push to
max heap... pop if > k... and then print ...
note: pii p = maxh.top.second...

------------------------------------------------------------

Sum of Elements between k1 smallest and k2 smallest numbers

simple...
find k1 smallest and k2 smallest number via heap...
(pass k1 and then k2 in same function one by one...)
now traverse array and take sum of all elements
which are >k1 and <k2... done...

------------------------------------------------------------


*/