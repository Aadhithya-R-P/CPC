vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
        vector<long long int> ans;
        long long int x=0,a=0,b=0;
        for(long long int i=0;i<N;i++)
        {
            x ^= Arr[i];
        }
        long long int setBit = x & ~(x-1);
        for(long long int i=0;i<N;i++)
        {
            if(setBit & Arr[i])
                a^=Arr[i];
            else
                b^=Arr[i];
        }
        if(b > a)
        {
            x = a;
            a = b;
            b = x;
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }