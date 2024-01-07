int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int ans = 0;
        for(int i=0;i<array.size();i++)
            ans ^= array[i];
        for(int i = 1;i<=n;i++)
            ans ^= i;
        return ans;
    }