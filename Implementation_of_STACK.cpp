#include <iostream>

using namespace std;

struct mystack {
int *arr;
int cap;  //capacity
int top;
    mystack(int c)
    {
        cap=c;
        arr=new int [cap];
        top=-1;
    }
    int push(int x)
    {
        top++;
      int ress = arr[top]=x;
        return ress;
    }
    int pop()
    {

        int res=arr[top];
          top--;
        return res;
    }
    int peek()
    {
        return arr[top];
    }
    int size()
    {
        return(top+1);
    }
    bool isEmpty()
    {
        return (top==-1);
    }
};

int main()
{
    mystack s(9);
    cout<<"Push_Value"<<endl;

    cout<<s.push(5)<<endl;
    cout<<s.push(15)<<endl;
    cout<<s.push(25)<<endl;
    cout<<s.push(35)<<endl;
    cout<<s.push(45)<<endl;
    cout<<s.push(55)<<endl;

    cout<<"Poping value"<<endl;
    cout<<s.pop()<<endl;
  //  cout<<s.pop()<<endl;
   // cout<<s.pop()<<endl;




    cout<<"Size = "<<s.size()<<endl;
    cout<<"Peek = "<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}
