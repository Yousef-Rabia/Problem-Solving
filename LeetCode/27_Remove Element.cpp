#include <iostream>
#include <Deque>
#include <map>
#include <algorithm>
#include <vector>
#include <algorithm>
using namespace std;



int removeElement(vector<int>& nums, int val) {
    int x=0;
    auto it = nums.begin();
    auto it_ = nums.begin();
    it_++;
    while (it != nums.end()) {
        if (*it == val){
            nums.erase(it);
            it = it_;
            if(it_ != nums.end())
            it_++;
        }
        else
        {
            x++;
        }
        it++;
        if (it_ != nums.end())
        it_++;

    }
    return x;
}



int main()
{
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    cout << removeElement(nums,val);
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << "  ";
    }
	return 0;
}