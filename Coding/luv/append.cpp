better way to append a char in a string is :

s = s + 'a'-----------------> O(s.length())-- > Average;
s = s.push_back('a') -------> O(1)-----------> Best;