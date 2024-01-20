int minRow(int N, int M, vector<vector<int>> A) {
        // code here
        for(int i=0;i<N;i++)
        {
            for(int j=M-2;j>=0;j--)
            {
                A[i][j] += A[i][j+1];
            }
        }
        int ans = 1, ones=M;
        for(int i=0;i<N;i++)
        {
            if(A[i][0] < ones)
            {
                ones = A[i][0];
                ans = i+1;
            }
        }
        return ans;
    }