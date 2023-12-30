int setBits(int N) {
        // int ans = __builtin_popcount(N);
        // return ans;
        int ans = 0;
        while(N)
        {
            ans += (N&1);
            N = N >> 1;
        }
        return ans;
    }