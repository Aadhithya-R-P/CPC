vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        vector<int> ans;
        int x=0,a=0,b=0;
        for(auto i : nums)
            x^= i;
        int setBit = x & (~x+1);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] & setBit)
                a^=nums[i];
            else
                b^=nums[i];
        }
        if(b < a)
        {
            x = a;
            a = b;
            b = x;
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }