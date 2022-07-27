#include <iostream>
using namespace std;

int main()
{
	int n, x, c = 0;
	int arr[101] = {};
	cin >> n >> x;
	x--;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	if (arr[x])
		c++;
	for(int i = 1; i < n; i++)
		if ((x-i)>-1&&x+i<n&&arr[x - i] && arr[x + i])
		{
			c+=2;
		}
		else if ((x - i) < 0 && x + i < n &&  arr[x + i])
		{
			c += 1;
		}
		else if ((x - i) > -1 && x + i >= n && arr[x - i])
		{
			c += 1;
		}
	cout << c;
return 0;
}
