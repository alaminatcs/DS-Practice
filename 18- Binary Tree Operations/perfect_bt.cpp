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
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {

        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

int levelCount(Node* root) {
    if (root == NULL) return 0;
    int left = levelCount(root->left);
    int right = levelCount(root->right);
    return max(left, right) + 1;
}

int elementCount(Node* root) {
    queue<Node*> q; int count = 0;
    if (root) q.push(root);
    while (!q.empty())
    {
        Node* f= q.front(); q.pop(); count++;
        if (f->left) q.push(f->left);
        if (f->right) q.push(f->right);
    }
    return count;
}

int main()
{
    Node *root = input_tree();
    int l = levelCount(root);
    int e = elementCount(root);
    if (e == pow(2, l)-1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}