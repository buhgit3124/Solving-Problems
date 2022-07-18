#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void PrintList(node *input)
{
    while (input != NULL)
    {
        cout << input->data << " ";
        input = input->next;
    }
    cout << endl;
}
void Insert_at_Begining(node **head)
{
    node *push = new node;
    push->next = *head;
    int dat;
    cout << "Enter data at the first node \n";
    cin >> dat;
    push->data = dat;
    *head = push;
}
void Insert_at_End(node **last, node *last_node)
{
    node *add = new node;
    add->next = NULL;
    cout << "Enter data at the last node\n";
    int data;
    cin >> data;
    add->data = data;
    last_node->next = add;
    *last = add;
}
int Insert_pos(node *head)
{
    cout << "enter the position you want to insert\n";
    int pos;
    cin >> pos;

    for (int i = 2; i < pos; i++)
    {
        head = head->next;
    }
    if (head == NULL)
    {
        return 1;
    }
    else if (pos == 1)
    {
        return 0;
    }
    else
    {
        cout << "Enter the data to be inserted at " << pos << " node\n";
        int data;
        cin >> data;
        node *position = new node;
        position->data = data;
        position->next = head->next;
        head->next = position;
    }
    return 2;
}
int main()
{
    node *head = new node;
    node *second = new node;
    node *third = new node;
    node *fourth = new node;
    node *last = new node;

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = last;
    last->data = 5;
    last->next = NULL;

    int pos_check = 9;

    PrintList(head);
    cout << endl;
    pos_check = Insert_pos(head);
    if (pos_check == 0)
    {
        Insert_at_Begining(&head);
    }
    else if (pos_check == 1)
    {
        Insert_at_End(&last, last);
    }
    PrintList(head);
    cout << endl;

    delete head;
    delete second;
    delete last;
    return 0;
}