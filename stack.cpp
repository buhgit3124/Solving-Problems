#include<iostream>
using namespace std;

class stack {
    private:
    int arr[5];
    int top;
    public:
    //creating empty stack
    void createEmptyStack()
    {
       top=-1;
       for (int i = 0; i < 5; i++)
       {
            arr[i]=0;
       }
       
    }
    bool isempty()
    {
            if (top==-1)
            {
                return true;
            }
            else
                return false;
    }
    bool isfull()
    {
        if(top== 4)
            return true;
        else
            return false;
    }
    void peek()
    {
        if(isempty())
        cout<<"stack underflow\n";
        else
        cout<<arr[top]<<endl;
    }
    void push(int value)
    {
        if(isfull())
        {
            cout<<"Stack overflow\n";
        }
        else
        {
            top++;
            arr[top]=value;
        }
    }
    int pop()
    {
        if(isempty())
        {
            cout<<"Stack underflow\n";
            return 0;
        }
        else
        {
            int popval=arr[top];
            arr[top]=0;
            top--;
            return popval;
        }
    }
    void display()
    {
        for (int i = 4; i > -1; i--)
        {
            cout<<arr[i]<<endl;
        }
        
    }
    int count()
    {
        return (top+1); 
    }
};


int main()
{
    //Trying to create a Stack
    cout<<"Enter the size of stack that you want to create : \n";
    int size;
    cin>>size;
    stack one;
    int option,position,value;

    do
    {
        cout<<"What operation do you want to perform -- select the option number--\nEnter 0 to exit\n";
        cout<<"1. Create Empty Stack\n";
        cout<<"2. Is Stack Empty\n";
        cout<<"3. Is Stack Full\n";
        cout<<"4. PUSH\n";
        cout<<"5. POP\n";
        cout<<"6. PEEK\n";
        cout<<"7. Display\n";
        cout<<"8. Count the number of elements in Stack\n";
        cout<<"9. Clear Screen\n";
        cout<<"0. Exit\n";

        cin>>option;
    switch (option)
    {
    case 1:
        one.createEmptyStack();
        break;
    case 2:
        cout<<one.isempty();
    case 3:
        cout<<one.isfull();
    case 4:
        cout<<"Enter the value to be pushed in the stack\n";
        cin>>value;
        one.push(value);
    case 5:
        cout<<one.pop();
    case 6:
        one.peek();
    case 7:
        one.display();
    case 8:
        cout<<one.count();
    case 9:
        system("clear");
    
    default:
        cout<<"choose the valid option\n";
        break;
    }

    }while(option!=0);

 return 0;   
}