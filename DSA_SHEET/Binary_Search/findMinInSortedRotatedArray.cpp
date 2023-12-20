//28 mins
class Solution{
public:
    int findMin(int A[], int n){
        //complete the function here
        int m, l=0, r = n-1;
        while(l<=r)
        {
            m = l+(r-l)/2;
            if(A[m] >= A[l])
            {
                if(A[r] < A[l])
                    l = m+1;
                else
                {
                    r=m-1;
                }
            }
            else
            {
                if(A[r] > A[m])
                    r = m;
            }
        }
        return A[l];
    }
};
