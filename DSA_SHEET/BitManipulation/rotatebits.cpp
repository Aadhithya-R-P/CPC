vector <int> rotate (int n, int d)
        {
            //code here.
            d = d % 16;
            vector <int> res;
            int temp = n;
            
            //left
            //(n << d)|(n >> (INT_BITS - d));
            int mask = ~((1 << (16 - d)) - 1);
            int shift = (temp & mask);
            temp = (temp << d);
            temp += (shift >> (16 - d));
            res.push_back(temp); 
            
            //right
            //(n >> d)|(n << (INT_BITS - d));
            temp = n;
            mask = (1 << d) - 1;
            shift = (temp & mask); 
            temp = (temp >> d);
            temp += (shift << (16 - d));
            res.push_back(temp);
        
            mask = (1 << 16) - 1;
    		res[0] = (res[0] & mask);
    		
            return res;
        }