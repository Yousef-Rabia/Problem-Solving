#include <iostream>
#include <Deque>
#include <map>
#include <algorithm>
#include <vector>
#include <algorithm>
using namespace std;


int removeDuplicates(vector<int>& nums) {
    int x = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[x] != nums[i]) {
            x++;
            nums[x] = nums[i];
        }
    }
    return x;
}



int main()
{
    vector<int> nums = {1, 1, 2};

    cout << removeDuplicates(nums);
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << "  ";
    }
	return 0;
}