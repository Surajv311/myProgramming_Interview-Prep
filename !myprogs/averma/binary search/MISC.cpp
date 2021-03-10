Find position of an element in a sorted array of infinite numbers

Introduce 'l' and 'h' = 0;
Now simply iterate your 'l' and 'h' where your
high is incremented with 2 everytime, and low with 1.
Hence in consequence steps you would be in a position wherein
your high would exceed the element you want to find.
(Means since your high would be incremented + 2, so you should stop
 in case where high > k , now you need worry about the infinite list
     of numbers ahead...)
    With this you can stop and the range from your current low
    and high can be binary searched to pinpoint your element.

    int findPos(int arr[], int key)
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

---------------------------------------------------------------------------------------- -

Minimum Difference Element in a Sorted Array

To break it down into the problems we already solved, need to find floor & ceil of the given element and return one of them which has min diff with the given key

        ---------------------------------------------------------------------------------------- -

        Peak element

        Now A peak element is an element that is greater than its neighbors.

        Given an input array nums, where nums[i] ≠ nums[i + 1], find a peak element and return its index.

                The array may contain multiple peaks, in that case return the index to any one of the peaks is fine.

                            Sol: so basically compare the mid element with arr[mid - 1] and arr[mid + 1] if our arr[mid] is greater than both then its peak else, now we must think which side we must mpve on to search for our peak, cosidering arr[m - 1] would already be small than arr[m] so arr[m - 1] can' tbe peak , but arr[m+1] is greater > arr[m] so there is a possibility that arr[m+2] is less than arr[m+1] then our m=1 would become the peak, as it would be greater than both, hence the possiblity of finding peak is on the right side of mid element, so we further do a recursive call for rihgt side to search for peak...need not be necessarily be right side, we could do recursive call for left as well, if our arr[m-1] is greater than arr[m]
        also for say our peak is at begining or end then :
        if mid==0  : if arr0 > arr1 then return 0 else 1
        if mid ==size-1 then if arr[size-1] > arr[size-1] then return size-1 else size-2
        So very cleverly binary search coed has or can be used .....
        the question is similar to finding element in biotonic arrya....
        only thing is in bitoninc array, there is only 1 peak element
        -----------------------------------------------------------------------------------------------------









