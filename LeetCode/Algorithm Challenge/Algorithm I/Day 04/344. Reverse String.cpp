#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;



void reverseString(vector<char>& s) {
	int right = 0;
	int left = s.size()-1;
	char c;
	while (right<left)
	{
		c = s[right];
		s[right] = s[left];
		s[left] = c;
		right++;
		left--;
	}
}




