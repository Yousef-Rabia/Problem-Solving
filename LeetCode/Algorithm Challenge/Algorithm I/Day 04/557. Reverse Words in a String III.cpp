#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

string reverseWords(string s) {
	int right = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
		{
			reverse(&s[right], &s[i]);
			right = i + 1;
		}
		if (i == s.length() - 1) {
			reverse(&s[right], &s[i + 1]);

		}
	}
	return s;
}






