#include <iostream>
#include <stack>
using namespace std;


struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};

struct mystack
{
    Node *head;
    int siz;
    mystack()
    {
       head=NULL;
       siz=0;
    }

    void push(int x)
    {
        Node *temp=new Node(x); //creating space in memory
        temp->next=head;
        head=temp;
        siz++;
    }

    int pop()
    {
        if(head==NULL)
            return INT_MAX;
        //else
            int res=head->data;
            Node *temp=head;
            head=head->next;
            delete(temp);
            siz--;
            return res;
    }
    int size()
    {
        return siz;
    }

    bool isEmpty()
    {
        return (head==NULL);
    }

    int peek()
    {
        if(head==NULL)
            return INT_MAX;
        return head->data;
    }

};

int main()
{
   mystack n;
    //s.display();
    n.push(5);
    n.push(35);
    n.push(45);
    n.push(55);
    n.push(75);
    n.push(95);

     cout<<"Poping value"<<endl;
     cout<<n.pop()<<endl;
  //  cout<<s.pop()<<endl;
   // cout<<s.pop()<<endl;


    cout<<"Size = "<<n.size()<<endl;
    cout<<"Peek = "<<n.peek()<<endl;
    cout<<n.isEmpty()<<endl;

    return 0;
}
