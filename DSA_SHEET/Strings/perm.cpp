vector<string>find_permutation(string S)
		{
		    // Code here there
		    set<string> ans;
		    string start= "";
		    vector<bool> vis(S.length(), false);
		    func(S, ans, start, vis);
		    vector<string> res(ans.begin(),ans.end());
		    return res;
		}

void func(string &S, set<string> &ans, string &st, vector<bool> &vis)
		{
		    if(st.length() == S.length())
		    {
		        ans.insert(st);
		        return;
		    }
		    for(int i=0;i<S.length();i++)
		    {
		        if(!vis[i])
		        {
		            vis[i] = true;
		            st += S[i];
		            func(S, ans, st, vis);
		            st.pop_back();
		            vis[i] = false;
		        }
		    }
		    return;
		}