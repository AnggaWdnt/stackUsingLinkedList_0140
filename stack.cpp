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
        if (isEmpty())
        {
            cout << "List is empty." << endl;
        }
        else
        {
            node *current = top;
            while (current != NULL)
            {
                cout << current ->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        }
    }

    bool isEmpty()
    {
        return top == NULL;
    }
};

int main()
{
    stack stack;

    int choice = 0;
    int value;

    while (choice !=5)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            stack.push(value);
            break;

            case 2:
            stack.pop();
            break;

        }
    }
}