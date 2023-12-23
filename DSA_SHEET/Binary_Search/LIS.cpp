//DP O(n^2)
int maxLength(string S)
    {
        // code here
        int l = S.length();
        vector<int> v(l,1);
        for(int i = l-2;i>=0;i--)
        {
            for(int j=i+1;j<l;j++)
            {
                if(S[i] < S[j])
                {
                    v[i] = max(v[i], v[j]+1);
                }
            }
        }
        return *max_element(v.begin(),v.end());
    }

//Binary Search O(nlogn)
int maxLength(string S)
    {
        // code here
        vector<int> ans;
        ans.push_back(S[0]);
        for(int i=1;i<S.length();i++)
        {
            if(S[i] > ans.back())
                ans.push_back(S[i]);
            else
            {
                int l = lower_bound(ans.begin(), ans.end(),S[i])-ans.begin();
                ans[l] = S[i];
            }
        }
        return ans.size();
    }
