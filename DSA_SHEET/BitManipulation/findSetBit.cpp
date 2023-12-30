int findPosition(int N) {
        // code here
        int pos = 0,c=0;
        while(N)
        {
            if(N&1)
            {
                c++;
                if(c > 1)   return -1;
            }
            N = N >> 1;
            pos++;
        }
        if(c == 0)  return -1;
        return pos;
    }