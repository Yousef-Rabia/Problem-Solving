#include <iostream>
#include <string>
using namespace std;

int main()
{
	string x;
	getline(cin, x);
	for (int i = 0; i < x.size(); i++)
	{
		while (x[i] == ' ' && x[i + 1] == ' ')
			x.erase(i + 1, 1);

		if(x[i] == ' ' && !isalpha(x[i + 1]))
			x.erase(i, 1);

		if (x[i] != ' '&&!isalpha(x[i]) && isalpha(x[i+1]))
			x.insert(i+1, " ");
	}

	cout << x;
	return 0;
}
