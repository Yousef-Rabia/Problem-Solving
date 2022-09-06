#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;


int main()
{
    int n,x=0;
    cin >> n;
    vector<int> v(n);
    vector<int> vmax(n,INT_MIN);
    vector<int> vmin(n,INT_MAX);
    for (size_t i = 0; i < n; i++)
    {
        cin >>v[i];
    }
    for (size_t i = 0; i < n; i++)
    {
            x = abs(v[i] - v[0]);
            vmax[i] = abs(v[i] - v[n-1]);
            if (x > vmax[i])
                vmax[i] = x;

            if(i>0)
                x = abs(v[i] - v[i-1]);
            if (i < n-1)
                vmin[i] = abs(v[i] - v[i + 1]);
            if (vmin[i] > x&&x)
                vmin[i] = x;


    }
    for (size_t i = 0; i < n; i++)
    {
        cout<< vmin[i]<<" "<<vmax[i]<<endl;
    }
    return 0;
}