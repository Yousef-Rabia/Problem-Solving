#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unordered_map>
#include<set>
#include<list>
#include <stack>
#include <queue>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        //if (s.size() == t.size()) {
        //    unordered_map<char, char>map;
        //    for (int i = 0; i < s.size(); i++)
        //    {
        //        if(map[s[i]]=='0')
        //    }
        //}
        //return false;
    }
};
bool isIsomorphic(string s, string t) {
    if (s.size() == t.size()) {
        unordered_map<char, char>map;
        unordered_map<char, bool> taken;
        for (int i = 0; i < s.size(); i++)
        {
            if (map[s[i]] == '\0'&& !taken[t[i]])
            {
                taken[t[i]] = 1;
                map[s[i]]=t[i];
            }
            else if (map[s[i]] != t[i]) {
                return false;
            }
        }
        return true;
    }
    return false;
}
int main() {
    unordered_map<char, char>map;
    auto x = map['x'];
    cout<<isIsomorphic("12", "13");
}
