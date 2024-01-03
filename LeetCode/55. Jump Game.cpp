#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    bool canJump(vector<int>& nums) {
        int lastCorrectPosation=nums.size()-1;
        for(int i=lastCorrectPosation;i>-1;i--)
        {
            if(i+nums[i]>=lastCorrectPosation)
            lastCorrectPosation=i;

        }
        return lastCorrectPosation==0;
    }


};

int main()
{
    Solution sol;
    vector<int> prices = {2,1,0,3,6,4};
    cout << sol.canJump(prices) << endl;
    return 0;
}