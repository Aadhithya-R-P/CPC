#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &arr,int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    while (i < n1 && j < n2) {
        if (L[i] <= M[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &v, int l, int r)
{
    if(l<=r)
    {
        int m = l + (r-l)/2;
        mergeSort(v,l,m);
        mergeSort(v,m+1,r);
        merge(v,l,m,r);
    }
}

int main()
{
    vector<int> v{1,324,23,11,23,4};
    for(auto x : v)
        cout << x << " ";
    cout << endl;
    mergeSort(v,0,size(v)-1);
    for(auto x : v)
        cout << x << " ";
    cout << endl;
    return 0;
}