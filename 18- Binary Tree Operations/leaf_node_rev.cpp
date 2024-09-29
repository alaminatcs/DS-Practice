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

vector<int> v;
void fun(Node *root)
{
    if (root == NULL) return;

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();

        if (current->left==NULL && current->right==NULL)
        {
            v.push_back(current->val);
        }

        if (current->left) q.push(current->left);
        if (current->right) q.push(current->right);
    }
}

int main()
{
    Node *root = input_tree();
    fun(root);
    for (int i = v.size()-1; i >= 0; i--) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}