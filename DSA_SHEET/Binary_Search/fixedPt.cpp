int fixedPt(int arr[], int low, int high) 
{ 
    if (high >= low) { 
        int mid = low + (high - low) / 2; 
        if (mid == arr[mid]) 
            return mid; 
        int res = -1; 
        if (mid + 1 <= arr[high]) 
            res = fixedPt(arr, (mid + 1), high); 
        if (res != -1) 
            return res; 
        if (mid - 1 >= arr[low]) 
            return fixedPt(arr, low, (mid - 1)); 
    }
    return -1; 
} 
