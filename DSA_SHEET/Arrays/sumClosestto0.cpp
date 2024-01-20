int closestToZero(int arr[], int n)
        {
            // your code here
            sort(arr,arr+n);
            int i=0,j=n-1;
            int ans,minl = i, minr=j;
            while(i<j)
            {
                if(abs(arr[i]+arr[j]) < abs(ans))
                {
                    ans = arr[i]+arr[j];
                    minl=i;
                    minr=j;
                }
                if(arr[i] + arr[j] < 0) i++;
                else    j--;
            }
            return arr[minl] + arr[minr];
        }