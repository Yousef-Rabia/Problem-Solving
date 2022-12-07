#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int index = -1;
    int x = 0;
    int y = nums.size();
    while (x != y) {
        int i = (x + y) / 2;
        if (target == nums[i])
            return i;
        else if (target > nums[i])
            x = i + 1;
        else
            y = i - 1;
    }
    return -1;
}



