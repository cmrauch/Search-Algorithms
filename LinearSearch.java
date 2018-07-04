// ==== Linear Search Class ===================================================
//
// ============================================================================
public class linearSearch {
	
  // returns the index of a target value in the array
	public int lSearch(int arr[], int target, int length) {
		for(int x = 0; x < length; ++x)
			if(arr[x] == target)
				return x;
		return -1;
	}

}
