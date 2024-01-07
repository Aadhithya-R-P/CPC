#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> number{3,4,7,2,2,6,4,1};
    int idx = -1;
    for(int i=number.size()-1;i>0;i--)
    {
        if(number[i] <= number[i-1])
            continue;
        else
        {
            idx = i-1;
            break;
        }
    }
    if(idx == -1)
    {
        cout << "That's the greatest number :)" << endl;
        return 0;
    }
    else
    {
        int mini = 10, j=-1;
        for(int i=idx+1;i<number.size();i++)
        {
            if(number[i] > number[idx])
            {
                mini = min(mini, number[i]);
                j = i;
            }
        }
        swap(number[idx], number[j]);
        sort(number.begin()+idx+1, number.end());
        for(int i : number)
            cout << i;
        cout << endl;
    }
    return 0;
}