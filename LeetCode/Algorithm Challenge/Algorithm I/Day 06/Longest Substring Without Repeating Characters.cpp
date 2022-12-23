#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>

using namespace std;


int fun(int n, int k)
{
	if (n == k) 
		return 1;
	else if (k == 1)
		return 1;
	if (n < k)
		return 0;


	return fun(n - 1, k - 1) + fun(n - 1, k)*k;
}

int main()
{
    int n, k, r, x, y;
	cin >> n >> k;

    cout << fun(n, k);
    return 0;
}
















//
//long long func(vector<vector<long long>>vec, vector<vector<vector<long long>>> & dp,
//    int n,int k,int r,int x,int y,int kk=0) {
//    long long count = 0;
//    if (x < 0 || x >= n || y >= n || y < 0)
//        return 1;
//    if (kk == k)
//        return 0;
//    if (dp[x][y][kk]!=0)
//        return dp[x][y][kk];
//    for (int i = 0; i < r; i++)
//    {
//       count+= func(vec,dp,n,k,r,x+vec[0][i],y+vec[1][i],kk+1);
//    }
//
//    return dp[x][y][kk]=count;
//}
//
//
//int main()
//{
//    int n, k, r, x, y;
//    cin >> n>> k>>r>>x>>y;
//    vector<vector<long long>>vec(2, vector<long long>(r));
//    vector<vector<vector<long long>>>dp(n+1,vector<vector<long long>>(n+1, vector<long long>(k+1)));
//
//    for (int i = 0; i < r; i++)
//    {
//        cin >> vec[0][i];
//        cin >> vec[1][i];
//    }    
//
//    cout << func(vec,dp, n, k, r, x, y);
//    return 0;
//}
