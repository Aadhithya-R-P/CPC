unsigned int getFirstSetBit(int n)
    {
        // Your code here
        unsigned int rightmostsetbit = n & (~n + 1);
        unsigned int c = 0;
        while(rightmostsetbit)
        {
            c++;
            // if(rightmostsetbit&1)   break;
            rightmostsetbit = rightmostsetbit >> 1;
        }
        return c;
    }