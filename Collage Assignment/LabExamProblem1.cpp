#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>

using namespace std;




///////////////////////////////////////////P1
int maxx;
int s;
int fun(vector<int> vec,int i=0,int x=0) {
	if (i == s) {
		return x;
	}
	int with = INT_MIN;
	int without = INT_MIN;
	if(x + vec[i]<=maxx)
	with = fun(vec, i + 1, x + vec[i]);
	without = fun(vec, i+1, x);
	return max(with, without);
}


int main() {
	//////////////////////////////////////////////////////////P1
	//cin >> maxx>>s;
	//vector<int> vec(s);
	//for (int i = 0; i < s; i++)
	//{
	//	cin>>vec[i];
	//}
	//cout << fun(vec);
}








