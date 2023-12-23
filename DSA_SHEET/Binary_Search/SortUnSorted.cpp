vector<int> printUnsorted(int arr[], int n) {
	    // code here
	    vector<int> v;
	    int s=0,e=n-1;
	    for(s=0;s<n-1;s++)
	    {
	        if(arr[s] > arr[s+1])
	            break;
	    }
	    if(s == n-1)
	    {
	        v.push_back(0);
	        v.push_back(0);
	        return v;
	    }
	    for(e;e>=1;e--)
	    {
	        if(arr[e-1] > arr[e])
	            break;
	    }
	    int min = arr[s], max = arr[s];
	    for(int i=s+1;i<=e;i++)
	    {
	        if(min > arr[i])
	            min = arr[i];
	        if(arr[i] > max)
	            max = arr[i];
	    }
	    for(int i=0;i<s;i++)
	    {
	        if(arr[i] > min)
	        {
	            s = i;
	            break;
	        }
	    }
	    for(int i=n-1;i>e;i--)
	    {
	        if(arr[i] < max)
	        {
	            e=i;
	            break;
	        }
	    }
	    v.push_back(s);
	    v.push_back(e);
	    return v;
	}
