#include <iostream>

using namespace std;

int main()
{
    int x = 12024, y = 3;
    while (y != 0) 
    { 
        unsigned carry = x & y; 
        x = x ^ y; 
        y = carry << 1; 
    } 
    cout << x << endl;
    return 0;
}