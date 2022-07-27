#include <iostream>
#include <cmath>
using namespace std;
bool distinct(int year)
{
	int digits[4];
	digits[0] = year % 10;
	digits[1] = (year / 10) % 10;
	digits[2] = (year / 100) % 10;
	digits[3] = year / 1000;
	for(int i=0;i<4;i++)
		for (int j = i+1; j < 4; j++)
		{
			if (digits[i] == digits[j])
				return false;
		}
	return true;
}
int main()
{
	int year;
	cin >> year;
	year++;
	while (!distinct(year))
		year++;
	cout << year;
	return 0;


}
