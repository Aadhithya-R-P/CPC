vector<int> find3Numbers(vector<int> arr, int N) {
        // Your code here
        vector<int> ans;
        if(N < 3)
            return ans;
        int seq = 1;
        int minnum =arr[0];
        int maxseq = INT_MAX;
        int storemin = minnum;
        for(int i=1;i<N;i++)
        {
            if(arr[i] == minnum)    continue;
            else if(arr[i] < minnum)
            {
                minnum = arr[i];
                continue;
            }
            else if(arr[i] < maxseq)
            {
                maxseq = arr[i];
                storemin = minnum;
            }
            else if(arr[i] > maxseq)
            {
                ans.push_back(storemin);
                ans.push_back(maxseq);
                ans.push_back(arr[i]);
                return ans;
            }
        }
        return ans;
    }