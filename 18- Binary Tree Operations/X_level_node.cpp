#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root = NULL;
    if (val != -1) root = new Node(val);

    queue<Node*> q;
    if (root) q.push(root);
    while (!q.empty())
    {

        Node *p = q.front(); q.pop();

        int l, r; cin >> l >> r;
        Node *myLeft = NULL;
        Node *myRight = NULL;
        if (l != -1) {
            myLeft = new Node(l);
            p->left = myLeft;
        }
            
        if (r != -1) {
            myRight = new Node(r);
            p->right = myRight;
        }        

        if (p->left) q.push(p->left);
        if (p->right) q.push(p->right);
    }
    return root;
}

int levelCount(Node *root)
{
    if (root == NULL) return 0;
    int left = levelCount(root->left);
    int right = levelCount(root->right);
    return max(left, right) + 1;
}

int levelElements(Node *root, int x)
{
    queue<pair<Node*, int>> q;
    if (root) q.push({root, 0});
    while (!q.empty())
    {
        pair<Node*, int> f = q.front();
        q.pop();
        Node* node = f.first;
        int l = f.second;
        if (l == x)
            cout << node->val << " ";
        if (node->left)
            q.push({node->left, l+1});
        if (node->right)
            q.push({node->right, l+1});
    }
}

int main()
{
    Node *root = input_tree();
    int x;
    cin >> x;
    int lx = levelCount(root) - 1;

    if (x > lx)
        cout << "Invalid" << endl;
    else
        levelElements(root, x);
    return 0;
}