#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

void printlist(Node *head)
{
   // Node *curr=head;
    while(head!=NULL)
    {
        cout<<(head->data)<<" ";
        head=head->next;
    }
}

int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    printlist(head);
    cout<<"\n";
    printlist(head);
    return 0;
}


