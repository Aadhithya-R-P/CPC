#include <iostream>

using namespace std;

int main()
{
    int n = 12, ans = n & (n-1);   //rightmost set bit = n & (~n+1);
    cout << ans << endl;
    return 0;
}