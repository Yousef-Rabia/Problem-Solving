#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>
#include <iterator>
#include <unordered_map>

using namespace std;
class Node {
public:
    int data;
    int L;
    int R;
    int parent;
    bool ch;
};
int CinR = 0;
int x, y;

void check(unordered_map<int, Node> m, Node& root, bool& c) {
    if (root.L == -1 && root.R == -1)
    {
        if (root.data < x || root.data > y)
        {
            root.ch = false;
        }
        return;
    }
    if (root.data < x || root.data > y)
    {
        root.ch = false;
        return;
    }
    else
    {
        if (root.L != -1)
        {
            check(m, m[root.L], root.ch);
        }
        if (root.R != -1)
        {
            check(m, m[root.R], root.ch);
        }
    }

}

int main()
{

    cin >> x >> y;
    unordered_map<int, Node> m;
    int n;
    cin >> n;
    m[n].data = n;
    m[n].parent = -1;
    m[n].L = -1;
    m[n].R = -1;
    if (n > x && n < y)
        m[n].ch = true;
    else
        m[n].ch = false;

    int e;
    cin >> e;
    char c;
    int temp1;
    int temp2;
    for (int i = 0; i < e; i++)
    {
        cin >> c >> temp1 >> temp2;
        m[temp2].parent = temp1;
        m[temp2].data = temp2;
        m[temp2].L = -1;
        m[temp2].R = -1;
        if (temp2 > x && temp2 < y)
            m[n].ch = true;
        else
            m[n].ch = false;

        if (c == 'L')
        {
            m[temp1].L = temp2;
        }
        else
        {
            m[temp1].R = temp2;
        }

    }

    check(m, m[n], m[n].ch);
    cout << CinR;
    return 0;
}