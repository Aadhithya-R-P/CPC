bool isPowerofTwo(long long n){
        
        // Your code here    
        long long n1 = n-1;
        return n && !(n & n1);
    }