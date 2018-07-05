// ==== Binary Search Algorithm ===============================================
//
// input:
//          arr[] - a sorted array
//          target - the target value being seaarched for
//          left - the left most index value of the array (usually starts with 0)
//          right - the right most index value of the array
// output:
//          returns the index of the target value
//          if value is not found, return -1
//
// ============================================================================
int binarySearch(int arr[],int target, int left, int right)
{
    int mid;

    while((right - left) >1)
    {
        mid = left + (right-left)/2;

        if( arr[mid] <= target )
            left = mid;
        else
            right = mid;
    }

    if(arr[left] == target)
        return left;

    // element was not found
    return -1;
}// end of binarySearch
// =============================================================================


// ==== Another Implementation =================================================
// **this has more comparisons
//
// =============================================================================
int binarySearch(int arr[],int target, int left, int right)
{

    int mid;

    while (left < right)
    {
        mid = ((left + right)/2);

        if(arr[mid] == target)
            return mid;

        //shorten array to just the right side
        if(arr[mid] < target)
            left = mid +1;

        //shorten array to just the left side
        if(arr[mid] > target)
            right = mid - 1;
    }

    //couldn't find the value
    return -1;
}// end of binarySearch
// =============================================================================
