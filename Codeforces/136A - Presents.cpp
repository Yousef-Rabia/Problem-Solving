#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;


int main()
{
    int n,x;
    cin >> n;
    vector<int> v(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        v[x - 1] = i + 1;
    }
    for (size_t i = 0; i < n; i++)
    {
        cout << v[i]<<" ";
    }
    return 0;
}