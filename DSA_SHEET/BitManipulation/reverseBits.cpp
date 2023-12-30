long long reversedBits(long long num) {
        // code here
        unsigned int count = sizeof(num) * 8 - 1;
        unsigned int reverse = num;
     
        num >>= 1;
        while (num) {
            reverse<<= 1;
            reverse |= num & 1;
            num >>= 1;
            count--;
        }
        reverse <<= count;
        return reverse;
    }