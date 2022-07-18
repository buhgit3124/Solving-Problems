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
}

int main()
{
    node *head = new node;
    node *second = new node;
    node *third = new node;

    head->data = 9;
    head->next = second;
    second->data = 6;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    PrintList(head);
    cout << endl;

    delete head;
    delete second;
    delete third;
    return 0;
}