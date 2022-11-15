#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	int n ;
	cin >> n;
	queue<int> q;
	vector<int> vec(n);
	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}
	q.emplace(n / 2);
	int x = 1;
	int y = 0;
	int temp;
	while (!q.empty())
	{
		cout << vec[q.front()]<<" ";
		if (y == 0)
			temp = ceil(q.front()/2.0);
		if (temp!=0)
		{
			if (q.front() - temp > -1)
				q.emplace(q.front() - temp);
			if (ceil(q.front() + temp < n))
				q.emplace(q.front() + temp);
		}
		q.pop();
		y++;
		if (y == x)
		{
			y = 0;
			x *= 2;
		}
	}
	return 0;
}
