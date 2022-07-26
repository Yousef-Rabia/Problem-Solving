#include<iostream>
#include <cctype>
using namespace std;
int main()
{
	int n,count=0;
	bool letter[26]={0};
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		char x;
		cin >> x;
		x = tolower(x);
		if (!letter[x - 'a'])
		{
			letter[x - 'a'] = true;
			count++;
		}
		
	}
	if (count < 26)
	{
		cout << "NO";
	}
	else
		cout << "YES";
	return 0;
}
