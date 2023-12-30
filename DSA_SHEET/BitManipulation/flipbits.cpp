int countBitsFlip(int a, int b){
        
        // Your logic here
        int c = a^b,ans=0;
        while(c)
        {
            ans += (c&1);
            c = c >> 1;
        }
        return ans;
    }