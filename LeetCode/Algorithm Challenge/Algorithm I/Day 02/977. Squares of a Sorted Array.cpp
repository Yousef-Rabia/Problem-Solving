#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

/**
 * Memory
 */

//vector<int> sortedSquares(vector<int>& nums) {
//	for (size_t i = 0; i < nums.size(); i++)
//	{
//		nums[i] = nums[i] * nums[i];
//	}
//	sort(nums.begin(), nums.end());
//
//	return nums;
//}



/**
 * Time
 */
vector<int> sortedSquares(vector<int>& nums) {
	int low = 0;
	int high = nums.size()-1;
	vector<int>newNums(high+1);
	int i = high;
	while (low <= high) {

		if (abs(nums[low]) >= abs(nums[high])){
			newNums[i] = nums[low] * nums[low];
			low++;
		}
		else {
			newNums[i] = nums[high] * nums[high];
			high--;
		}
		i--;
	}
	return newNums;
}



