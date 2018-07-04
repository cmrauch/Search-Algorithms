// ==== Linear Search Algorithm ===============================================
// input: 
//        arr[]  - The array that will be searched
//        target - The target value being searched for
//        length - The length of the array
// output:
//        returns the index of the target value
//        otherwise returns -1
// ============================================================================
int linearSearch(int arr[],int target,int length)
{
    for(int x = 0; x < length; ++x)
        if(arr[x] == target)
            return x;

    return -1;
}
