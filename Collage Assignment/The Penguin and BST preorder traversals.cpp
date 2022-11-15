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
class BST {
public:
    int data;
    BST* left, * right;
    BST() :left(NULL), right(NULL)
    {
        data = 0;
    }
    BST(int value) :left(NULL), right(NULL)
    {
        data = value;
    }
    BST* InsertNODE(BST* root, int value) {
        if (!root)
        {
            root = new BST(value);
        }
        else if (value > root->data)
        {
            root->right = InsertNODE(root->right, value);
        }
        else if (value < root->data)
        {
            root->left = InsertNODE(root->left, value);
        }
        return root;
    }

};


int main()
{
    int n, x;
    cin >> n;
    vector <int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    if (is_sorted(vec.begin(), vec.end()))
    {
        int root;
        root = vec[0];
        queue<int>L;
        queue<int>G;
        for (int i = 1; i < n; i++)
        {
            x = vec[i];
            if (x > root)
                G.emplace(x);
            else
                L.emplace(x);
        }
        cout << root << " ";
        while (!G.empty() || !L.empty())
        {
            if (!L.empty())
            {
                cout << L.front() << " ";
                L.pop();
            }
            if (!G.empty())
            {
                cout << G.front() << " ";
                G.pop();
            }
        }
    }
    else
    {
        x = vec[0];
        BST tree, * root = NULL;
        root = tree.InsertNODE(root, x);
        for (int i = 1; i < n; i++)
        {
            x = vec[i];
            tree.InsertNODE(root, x);
        }
        queue<BST*>q;
        q.emplace(root);
        while (!q.empty())
        {
            cout << q.front()->data << " ";
            if (q.front()->left)
                q.push(q.front()->left);
            if (q.front()->right)
                q.push(q.front()->right);
            q.pop();

        }


    }
    return 0;


}