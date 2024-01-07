string reverseWords(string S) 
    { 
        // code here 
        vector<string> s;
        int i=0, n=S.length();
        string st = "";
        while(i < n)
        {
            if(S[i] == '.')
            {
                s.push_back(st);
                st = "";
            }
            else
            {
                st += S[i];
            }
            i++;
        }
        s.push_back(st);
        string ans = "";
        for(int i=s.size()-1;i>=0;i--)
        {
            ans += s[i];
            ans += '.';
        }
        ans.pop_back();
        return ans;
    } 