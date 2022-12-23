#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int maX(int x, int y, int z)
{
    if (y > z && y > x)
        return y;
    if (z > y && z > x)
        return z;
    return y;

}


int TheftIsHarram(vector<vector<int>> vec, int x)
{
    if (x < 1) {
        return 0;
    }
    if (x == 1) {
        return max(vec[0][0],vec[1][0]);
    }

           vector<vector<int>> dp(2, vector<int>(x, 0));
           dp[0][0] = vec[0][0];
           dp[1][0] = vec[1][0];
           dp[0][1] = max(vec[0][1]+ vec[1][0],vec[0][0]);
           dp[1][1] = max(vec[1][1]+ vec[0][0],vec[1][0]);

for (int i = 2; i < x; i++)
{
    dp[0][i] = vec[0][i] + maX( dp[0][i -2], dp[1][i - 2],  dp[1][i -1]);
    dp[1][i] = vec[1][i] + maX( dp[1][i -2], dp[0][i - 2],  dp[0][i -1]);
}

return max(dp[0][x -1], dp[1][x -1]);
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> vec(2, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        cin >> vec[0][i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> vec[1][i];
    }
    cout << TheftIsHarram(vec,vec[0].size());
    return 0;
}




