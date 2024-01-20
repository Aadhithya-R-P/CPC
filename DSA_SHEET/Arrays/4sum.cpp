vector<vector<int> > fourSum(vector<int> &arr, int X) {
        // Your code goes here
        map<vector<int>, int> v;
        vector<vector<int>> ans;
        unordered_map<int, pair<int, int> > mp;
        int n = arr.size();
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                mp[arr[i] + arr[j]] = { i, j };
                
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int sum = arr[i] + arr[j];
                if (mp.find(X - sum) != mp.end()) {
                    pair<int, int> p = mp[X - sum];
                    if (p.first != i && p.first != j
                        && p.second != i && p.second != j) {
                        vector<int> temp;
                        temp.push_back(arr[i]);
                        temp.push_back(arr[j]);
                        temp.push_back(arr[p.first]);
                        temp.push_back(arr[p.second]);
                        sort(temp.begin(),temp.end());
                        v[temp]++;
                    }
                }
            }
        }
        for(x: v)
        {
            ans.push_back(x.first);
        }
        return ans;
    }