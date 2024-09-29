#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void head_insert(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->next = head;
    head = new_node;
}

void tail_insert(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = new_node;
}

void delete_value(Node *&head, Node *&tail, int index)
{
    if (head == NULL)
    {
        return;
    }
    if (index == 0)
    {
        Node *del_node = head;
        head = head->next;
        delete del_node;
        if (head == NULL)
        {
            tail = NULL;
        }
        return;
    }

    Node *temp = head;
    for (int i = 0; i+1 < index; i++)
    {
        if (temp == NULL || temp->next == NULL)
        {
            return;
        }
        temp = temp->next;
    }
    
    Node *del_node = temp->next;
    if (temp->next != NULL)
    {
        temp->next = temp->next->next;
        if (temp->next == NULL)
        {
            tail = temp;
        }
    }
    delete del_node;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            head_insert(head, tail, v);
        }
        else if (x == 1)
        {
            tail_insert(head, tail, v);
        }
        else if (x == 2)
        {
            delete_value(head, tail, v);
        }
        print(head);
    }
    return 0;
}
