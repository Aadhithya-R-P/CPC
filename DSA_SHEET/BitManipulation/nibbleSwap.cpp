int swapNibbles(int N){
        // code here
        int r = (N & 0b00001111);
        r = r << 4;
        int l = (N & 0b11110000);
        l = l >> 4;
        return (r | l);
    }