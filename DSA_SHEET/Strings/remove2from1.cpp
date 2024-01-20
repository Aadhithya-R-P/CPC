string removeChars(string string1, string string2) {
        // code here
        vector<int> v(256,-1);
        for(int i=0;i<string2.length();i++)
        {
            v[string2[i]]++;
        }
        string ans="";
        int i=0;
        while(i < string1.length())
        {
            if(v[string1[i]] == -1)
                ans += string1[i];
            i++;
        }
        return ans;
    }