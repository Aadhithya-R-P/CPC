#include <bits/stdc++.h>

using namespace std;

void reverse ( string &str, int low, int high ) 
{ 
    while ( low < high ) 
    { 
        swap(str[low], str[high]); 
        ++low; 
        --high; 
    } 
} 

void cycleLeader(string &in, int shift, int len)
{
    int j;
    char a;
    for(int i=1;i<len;i *= 3)
    {
        j=i;
        a = in[shift+j];
        do{
            if(j&1)
                j = len/2 + j/2;
            else
                j /= 2;
            swap(in[shift+j], a);
        }while(j != i);
    }
}

void func(string &in)
{
    int lenRem = size(in), shift=0,k, lenFirst;
    while(lenRem)
    {
        k=0;
        while(pow(3,k) + 1 <= lenRem)
            k++;
        lenFirst = pow(3,k-1)+1;
        lenRem -= lenFirst;
        cycleLeader(in, shift, lenFirst);
        reverse(in, shift/2, shift-1);
        reverse(in, shift, shift+lenFirst/2 - 1);
        reverse(in, shift/2, shift+lenFirst/2 - 1);
        shift += lenFirst;
    }
}

int main()
{
    string s = "a1b2c3d4e5f6g7h8i9j1k2l3m4";
    func(s);
    cout << s << endl;
    return 0;
}