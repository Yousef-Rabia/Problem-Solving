#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0&& i!=n)
			cout << "I love that ";
		else if (i % 2 == 1 && i != n)
			cout << "I hate that ";
		else if (n % 2 == 1)
			cout << "I hate it ";
		else 
			cout << "I love it ";
	}
	return 0;
}
