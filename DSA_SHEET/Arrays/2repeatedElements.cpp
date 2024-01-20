vector<int> twoRepeated (int arr[], int N) {
        // Your code here
        vector<int> ans;
        int x = 0;
        for(int i=1;i<=N;i++)
            x^=i;
        for(int i=0;i<N+2;i++)
            x^=arr[i];
        
        int setBit = x & ~(x-1);
        int a=0,b=0;
        for(int i=0;i<N+2;i++)
        {
            if(arr[i] & setBit)
                a^=arr[i];
            else
                b^=arr[i];
        }
        for(int i=1;i<=N;i++)
        {
            if(i&setBit)    a^= i;
            else    b^=i;
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }

vector<int> twoRepeated (int arr[], int N) {
        // Your code here
        vector<int> ans;
        for(int i=0;i<N+2;i++)
        {
            if(arr[abs(arr[i])] > 0)
                arr[abs(arr[i])] *= -1;
            else
            {
                ans.push_back(abs(arr[i]));
            }
        }
        return ans;
    }