int findFloor(vector<long long> v, long long n, long long x){
        // Your code here
        long long m,l=0,r=n-1;
        if(v[l] > x)
            return -1;
        if(v[r] <= x)
            return r;
        while(r-l>1)
        {
            m = l + (r-l)/2;
            if(v[m] <= x)
            {
                l = m;
            }
            else
            {
                r=m;
            }
        }
        return l;
    }
