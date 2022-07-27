#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,x,y, x_, y_,z=0;
	bool b=0,d=0;
	cin >> n;
	cin >> x_ >> y_;
	if (x_ - y_)
		b = 1;
	for (int i = 1; i < n; i++)
	{
		cin >> x >> y;
		if (x - y)
			b = 1;
		if (x_ < x)
			d = 1;
		else
		{
			x_ = x;
		}
	}
	if (b)
		cout << "rated";
	else
		if(d)
		cout << "maybe";
		else
			cout << "unrated";
	return 0;


}
