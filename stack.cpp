#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;

    node()
    {
        next = NULL;
    }
};

class stack
{
    private:
    node *top;

    public:
    stack()
    {
        top = NULL;
    }

    int push(int value)
    {
        node *newnode = new node();
        newnode->data = value;
        newnode->next = top;
        top = newnode;
        cout << "Push value: " << value << endl;
        return value;
    }

    void pop()
    {
        node *temp = top;
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Popped value:" << temp->data << endl;
        top = temp-> next;
        delete temp;
    }

    void peek()
    {
        
    }
};