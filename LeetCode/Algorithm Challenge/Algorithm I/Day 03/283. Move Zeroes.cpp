#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;



/**
 * Memory
 */

//void moveZeroes(vector<int>& nums) {
//	int index = 0;
//	for (int i = 0; i < nums.size(); i++)
//	{
//		if (nums[i])
//			nums[index++] = nums[i];
//	}
//	while (index < nums.size())
//	{
//		nums[index++] = 0;
//	}
//}



/**
 * Time
 */

void moveZeroes(vector<int>& nums) {
	int index = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i])
			nums[index++] = nums[i];
	}
	while (index<nums.size())
	{
		nums[index++] = 0;
	}
}



