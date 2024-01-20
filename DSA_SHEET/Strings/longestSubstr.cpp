int longestSubstrDistinctChars (string S)
{
    // your code here
    int i=0,j=0,n=S.length(),ans = 1;
    if(n <= 1)
        return n;
    vector<bool> v(256,false);
    while(j < n)
    {
        if(v[S[j]])
        {
            while(v[S[j]])
            {
                v[S[i]] = false;
                i++;
            }
        }
        v[S[j]] = true;
        ans = max(ans, j-i+1);
        j++;
    }
    return ans;
}