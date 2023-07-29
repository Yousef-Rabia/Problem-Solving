#include <iostream>
#include <Deque>
#include <map>
#include <algorithm>
#include <vector>
#include <algorithm>
using namespace std;



void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	vector<int> mer(m + n);
	int x = 0, y = 0;
	for (int i = 0; i < m + n; i++) {
		if (nums1[x] <= nums2[y] && x < m || y >= n) {

			mer[i] = nums1[x];
			x++;
		}
		else if (nums2[y] < nums1[x] && y < n || x >= m) {
			mer[i] = nums2[y];
			y++;
		}
	}
	nums1 = mer;
}



int main()
{

	vector<int> num1 = { 1,2,3,0,0,0 };
	vector<int> num2 = {2,5,6};

	merge(num1,3,num2,3);
	int i = 0;
	while (i<6)
	{
		cout << num1[i]<<" ";
		i++;
	}
	return 0;
}