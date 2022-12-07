#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


vector<int> twoSum(vector<int>& numbers, int target) {
	vector<int> sol(2);
	int low = 0;
	int high = numbers.size() - 1;

		while (low<high)
		{
			int sum = numbers[low] + numbers[high];
			if (sum == target)
				return vector<int>{low + 1, high + 1};
			else if (sum < target)
				low++;
			else
				high--;
		}

}




