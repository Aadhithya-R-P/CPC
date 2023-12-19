class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int f = first(arr,n,x);
	    if(f == -1)
	        return 0;
	    int l = last(arr,n,x);
	    return l-f+1;
	}
	int first(int arr[], int n, int x)
	{
	    int first=-1,l=0,r=n-1,m;
	    while(l<=r)
	    {
	        m = l + (r-l)/2;
	        if(arr[m] == x)
	        {
	            first = m;
	            r = m-1;
	        }
	        else if(arr[m] < x)
	            l=m+1;
	        else
	            r=m-1;
	    }
	    return first;
	}
	int last(int arr[], int n, int x)
	{
	    int last=-1,l=0,r=n-1,m;
	    while(l<=r)
	    {
	        m = l + (r-l)/2;
	        if(arr[m] == x)
	        {
	            last = m;
	            l = m+1;
	        }
	        else if(arr[m] < x)
	            l=m+1;
	        else
	            r=m-1;
	    }
	    return last;
	}
};
