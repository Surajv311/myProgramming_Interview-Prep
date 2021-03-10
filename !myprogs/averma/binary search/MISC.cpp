// Misc Q's and their approach.

/*
-> Find position of an element in a sorted array of infinite numbers.
{
Introduce 'l' and 'h' = 0;
Now simply iterate your 'l' and 'h' where your
high += 2 (you may any other number as well),
and low +=1 or...store previous high....
Hence in consequence steps you would be in a position wherein
your high would exceed the element you want to find; i.e a
case wherein high>k (after high+=2 everytime...) so break here,
now no need to worry about the numbers ahead in infinite list.
Now you get the range from current low and high and now you can
use binary search to pinpoint your element.

// pseudocode......
    int rangepos(int arr[], int key)
{
    int l = 0, h = 1;
    int val = arr[0];

    // Find h to do binary search
    while (val < key)
    {
        l = h;        // store previous high
        h = 2 * h;    // double high index
        val = arr[h]; // update new val
    }

    // at this point we have updated low and
    // high indices, Thus use binary search
    // between them
    return binarySearch(arr, l, h, key).......;
    // you may define function and do binary_search.
}
}
---------------------------------------------------------------------

-> Find element with minimum difference from key in Sorted Array
{
Its similar to earlier solved qs.
Find floor & ceil of the given key from array then
return min(key-floor , key -ceil);
}
---------------------------------------------------------------------

-> Peak element, ~ Similar q. is Biotonic Array
A peak element is an element that is greater than its neighbors.
Eg. in a,b,c,d : c is peak if c>b and c>d.
{
Compare the arr[mid] with arr[mid - 1]
and arr[mid + 1] if our arr[mid] is greater than
both then its peak else: now we must think which
side we must move on to search for our peak,
cosidering arr[m - 1] < arr[m] so the sides of
arr[m-1] need not be considered as they would be already
small. But since say arr[m+1] is greater than arr[m]
then there is a possibility that arr[m+1] > arr[m+2]
as well so we move right...as more possibility...
so vice-versa...

Also consider if peak is at begining or end then :
if mid==0  : if arr[0] > arr[1] return 0 else 1
if mid ==size-1 then if arr[size-1] > arr[size-2] then return size-1 else size-2

So very smart use of binarySearch.
}
---------------------------------------------------------------------
*/









