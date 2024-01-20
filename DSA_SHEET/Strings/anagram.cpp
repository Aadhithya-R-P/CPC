bool isAnagram(string a, string b){
        
        // Your code here
        int x = a.length(), y = b.length();
        if(x != y)  return false;
        unordered_map<char,pair<int,int>> m;
        for(int i=0;i<x;i++)
        {
            if(m.find(a[i]) != m.end())
            {
                m[a[i]].first++;
            }
            else
            {
                m[a[i]] = {1,0};
            }
        }
        for(int i=0;i<y;i++)
        {
            if(m.find(b[i]) != m.end())
            {
                m[b[i]].second++;
            }
            else
            {
                m[b[i]] = {0,1};
            }
        }
        for(auto X : m)
        {
            if(X.second.first != X.second.second)
                return false;
        }
        return true;
    }
