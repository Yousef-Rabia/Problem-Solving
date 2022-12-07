#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void rotate(vector<int>& nums, int k) {
	int n = nums.size();
	vector<int> sol(n);
	for (int i = n-k; i < n; i++)
	{
		sol[i + k - n] = nums[i];
	}	
	for (int i = k; i < n; i++)
	{
		sol[i] = nums[i-k];
	}
	nums = sol;
}

int main() {
	vector<int> vec = { -1 };
	rotate(vec, 2);
}

