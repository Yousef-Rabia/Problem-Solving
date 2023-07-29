#include <iostream>
#include <Deque>
#include <map>
#include <algorithm>
#include <vector>
#include <algorithm>
using namespace std;


int removeDuplicates(vector<int>& nums) {
    bool y = true;
    int x = 0;
    for (int i = 0; i < nums.size(); i++) {

        if (nums[x] != nums[i]) {
            x++;
            nums[x] = nums[i];
            y = true;
        }
        if ((i < nums.size() - 1) && nums[i] == nums[i + 1] && y)
        {
            x++;
            nums[x] = nums[i];
            y = false;
        }
    }
    return x+1;
}



int main()
{
    vector<int> nums = {1, 1,1,1,2,2, 2};
    int z = removeDuplicates(nums);
    for (int i = 0; i < z; i++) {
        cout << nums[i] << "  ";
    }
	return 0;
}