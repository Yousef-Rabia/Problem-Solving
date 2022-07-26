#include<iostream>
#include <cctype>
using namespace std;
int main()
{
	int  n;
	long  x,temp=0;
	long long count = 0;
	cin >> n;
	while (n+1)
	{
		cin >> x;
		if (x % 2 == 0)
			count += x;
		else
			if (temp == 0)
				temp = x;
			else
			{
				count += x + temp;
				temp = 0;
			}
		n--;
	}
	cout << count;
	return 0;
}
