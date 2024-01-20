bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        int j,k;
        for(int i=0;i<n;i++)
        {
            k = n-1;
            j = i+1;
            while(j<k)
            {
                if(A[j] + A[k] == X-A[i])   return true;
                else if(A[j] + A[k] > X-A[i])   k--;
                else    j++;
            }
        }
        return false;
    }