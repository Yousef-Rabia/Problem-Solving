#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>

using namespace std;


bool checkInclusion(string s1, string s2) {
	int size1 = s1.length();
	int size2 = s2.length();
	if (size1> size2)
		return false;
	vector<int>vec1(26);
	int match = 0;
	for (int i = 0; i < size1; i++)
	{
		vec1[ s1[i] - 'a']++;
	}
	int j ;
	for (int i = 0; i <= size2-size1; i++)
	{
		vector<int>vec2(26);
		for (int j = i; j < size1+i; j++)
		{
			vec2[s2[j] - 'a']++;
		}

		if (vec1 == vec2)
			return true;
	}

	return false;
}








