long long fact(int n) { 
        return (n <= 1) ? 1 : n * fact(n - 1); 
    }
    
    long long findRank(string str) {
        //code here
        int len = str.length();
        long long mul = fact(len);
        long long rank=1;
        vector<int> arr(256,0);
        for(int i=0;i<str.length();i++)
            arr[str[i]]++;
        for(int i=1;i<256;i++)
            arr[i] += arr[i-1];
        for(int i=0;i<len;i++)
        {
            mul /= len-i;
            rank += arr[str[i]-1] * mul;
            char c = str[i];
            for(int i=c;i<256;i++)
                --arr[i];
        }
        return rank;
    }