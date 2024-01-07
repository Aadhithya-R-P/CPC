int myAtoi(char* str)
{
    int res = 0,mul=1;
    for (int i = 0; str[i] != '\0'; ++i)
    {
        if(str[i] == '-')
        {
            mul = -1;
            continue;
        }
        int d = str[i] - '0';
        if(d >= 10) return 0;
        res = res * 10 + d;
    }
    return res*mul;
}