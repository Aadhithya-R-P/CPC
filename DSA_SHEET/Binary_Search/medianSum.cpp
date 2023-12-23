int findMidSum(int ar1[], int ar2[], int n) {
            // code here
            int l = (int)-1e9, r = (int)1e9, pos=n;
            double ans = 0.0;
            while(l<=r)
            {
                int m = l + ((r-l)>>1);
                int ub = upper_bound(ar1,ar1+n,m) - ar1 + upper_bound(ar2,ar2+n,m) - ar2;
                if(ub <= pos)
                    l = m+1;
                else
                    r = m-1;
            }
            ans = l;
            pos--;
            l = (int)-1e9, r = (int)1e9;
            while(l<=r)
            {
                int m = l + ((r-l)>>1);
                int ub = upper_bound(ar1,ar1+n,m) - ar1 + upper_bound(ar2,ar2+n,m) - ar2;
                if(ub <= pos)
                    l = m+1;
                else
                    r = m-1;
            }
            ans = (ans + l);
            return ans;
    }
