char nonrepeatingCharacter(string S)
    {
       //Your code here
       unordered_map<char, pair<int,int>> m;
       for(int i=S.length()-1;i>=0;i--)
       {
           if(m.find(S[i]) != m.end())
           {
               m[S[i]].first++;
               m[S[i]].second = i;
           }
           else
           {
               m[S[i]] = {1,i};
           }
       }
       int min = 100001;
       for(auto x: m)
       {
           if(x.second.first == 1 && x.second.second < min)
           {
               min = x.second.second;
           }
       }
       if(min == 100001)    return '$';
       return S[min];
    }