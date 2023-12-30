#include <iostream>

using namespace std;

int main()
{
    int n = 1100, mask = n >> 31; //sizeof(int) = 4
    int ans = (mask+n)^mask;
    cout << ans << endl;
    return 0;
}