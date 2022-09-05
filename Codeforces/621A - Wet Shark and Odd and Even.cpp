#include <iostream>
using namespace std;

#include <algorithm>

int main()
{
    int n = 0;
    long long j = 0, x, sum = 0;
    cin >> n;
    
    int arr[100000];
    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 == 0)
            sum += x;
        else
        {
            arr[j] = x;
            j++;
        }
    
    }
    sort(arr, arr+j);
    if (j % 2 == 0)
    {
        for (size_t i = 0; i < j; i++)
            sum += arr[i];
    }
    else
    {
        for (size_t i = j-1; i >0; i--)
            sum += arr[i];
    }
    cout << sum;
    return 0;
}