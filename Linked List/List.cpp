#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void insertHead(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    n->next = head;
    head = n;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
            return true;
        temp = temp->next;
    }
    return false;
}
void deletion(node *&head, int val)
{   
    if(head==NULL)//empty list
    {
        return;
    }
    if(head->next==NULL)//for a single node
    {
        deleteHead(head);
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
void deleteHead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}
int main()
{
    node *head = NULL;

    insertTail(head, 3);
    insertTail(head, 5);
    insertTail(head, 7);
    insertHead(head, 1);
    display(head);
    deletion(head, 5);
    deleteHead(head);
    display(head);
    cout<<search(head,7)<<endl;
    return 0;
}