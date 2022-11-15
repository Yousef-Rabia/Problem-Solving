#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>
#include <iterator>

using namespace std;


class NestedBST {
public:
    int data;
    NestedBST* left, * right;
    NestedBST() :left(NULL), right(NULL)
    {
        data = 0;
    }
    NestedBST(int value) :left(NULL), right(NULL)
    {
        data = value;
    }
    NestedBST* InsertNODE(NestedBST* root, int dep) {
        if (!root)
        {
            return new NestedBST(dep);
        }

        if (dep > root->data)
        {
            root->right = InsertNODE(root->right, dep);
        }
        else
        {
            root->left = InsertNODE(root->left, dep);
        }
        return root;
    }
    int search(NestedBST* root, int dep, int id, int& f) {
        if (!root)
        {
            return 0;
        }
        else if (id == root->data)
        {
            f = 1;

            return 1;
        }
        else if (id > root->data)
        {
            return search(root->right, dep, id, f) + 1;
        }
        else
        {
            return search(root->left, dep, id, f) + 1;
        }
    }

};
class BST {
    int data;
    BST* left, * right;
    NestedBST* nested;
public:
    BST() :left(NULL), right(NULL), nested(NULL)
    {
        data = 0;
    }
    BST(int value) :left(NULL), right(NULL), nested(NULL)
    {
        data = value;
    }
    BST* InsertNODE(BST* root, int dep, int id) {
        if (!root)
        {
            root = new BST(dep);
            root->nested = new NestedBST(id);
        }
        else if (dep == root->data)
        {
            NestedBST Ntree;
            root->nested = root->nested->InsertNODE(root->nested, id);
        }
        else if (dep > root->data)
        {
            root->right = InsertNODE(root->right, dep, id);
        }
        else
        {
            root->left = InsertNODE(root->left, dep, id);
        }
        return root;
    }
    int search(BST* root, int dep, int id, int& f) {
        if (!root)
        {
            return 0;
        }
        else if (dep == root->data)
        {

            return root->nested->search(root->nested, dep, id, f) + 1;
        }
        else if (dep > root->data)
        {
            return search(root->right, dep, id, f) + 1;
        }
        else
        {
            return search(root->left, dep, id, f) + 1;
        }
    }

};
int main() {
    BST tree, * root = NULL;
    int n, q, x, y, f = 0;
    cin >> n >> q >> x >> y;
    root = tree.InsertNODE(root, x, y);
    for (int i = 1; i < n; i++)
    {
        cin >> x >> y;
        tree.InsertNODE(root, x, y);
    }
    for (int i = 0; i < q; i++)
    {
        cin >> x >> y;
        int z = tree.search(root, x, y, f);
        cout << z << " " << f << endl;
        f = 0;
    }
    return 0;
}

