int findMaximum(int arr[], int n) {
	    // code here
	    int l=0,r=n-1,m;
	    while(l<=r)
	    {
	        m = l  + (r-l)/2;
	        if(arr[m] > arr[m+1] && arr[m] > arr[m-1])
	            return arr[m];
	        else if(arr[m+1] > arr[m])
	            l = m+1;
	        else
	            r = m-1;
	    }
	    return arr[r];
	}
