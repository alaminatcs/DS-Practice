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

void printLeftOuter(Node *root)
{
    if (root == NULL) return;       //10 20 40 60
    if (root->left)
    {
        printLeftOuter(root->left);
        cout << root->val << " ";
    }
    else if (root->right)
    {
        printLeftOuter(root->right);
        cout << root->val << " ";
    }
    else cout << root->val << " ";
}

void printRightOuter(Node *root)
{
    if (root == NULL) return;       // 30 50 80 110
    if (root->right)
    {
        cout << root->val << " ";
        printRightOuter(root->right);
    }
    else if (root->left)
    {
        cout << root->val << " ";
        printRightOuter(root->left);
    }
    else cout << root->val << " ";
}

int main()
{
    Node *root = input_tree();
    if (root)
    {
        printLeftOuter(root->left);
        cout << root->val << " ";
        printRightOuter(root->right);
    }

    return 0;
}
