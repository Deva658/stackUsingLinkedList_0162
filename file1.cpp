#include <iostream>

using namespace std;

// node class representing a single node in the linked list
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

// stack class
class Stack
{
private:
    Node *top; // pointer to the top node of the stack

public:
    Stack()
    {
        top = NULL; // intialaze the stack with a null top pointer
    }

    // push operation: insert an element onte the top of the stack
    int push(int value)
    {
        Node *newNode = new Node(); // 1.allocate mmeory for the new node
        newNode->data = value;      // 2.assign value
        newNode->next = top;        // 3. set the next pointer of the new node to the curret top
        top = newNode;              // 4, update the top pointer to the new node
        cout << "Push Value: " << value << endl;
        return value;
    }

    // pop operation: remove the topmodt elemenet from the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "stack is empty. " << endl;
        }

        Node *temp = top; // create a temporary pointer to the nods
        top = top->next;  // update the top pointer to the next node
        cout << "Popped value: " << top->data << endl;
    }

    // peak/top operation: retrieve the value of topmost element without removig
    void peak()
    {
        if (top == NULL)
        {
            cout << "List is Empty." << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        } // return the value of the top node
    }

    // isempty operation: check if the stack is empty
    bool isEmpty()
    {
        return top == NULL; // returm true if the top pointer s null, indicating
    }
};

int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while (choice != 5)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peak\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            stack.push(value); // push the entered value onto the stack
            break;

        case 2:
            if (!stack.isEmpty())
            {
                stack.pop(); // pop the top element from the stack
            }
            else
                ;
            {
                cout << "Stack is empty. cannot pop." << endl;
            }
            break;
        case 3:
            if (!stack.isEmpty())
            {
                stack.peak(); // get the value of the top element
            }
            else
            {
                cout << "Stack is empty. NO top value." << endl;
            }
            break;
        case 4:
            cout << "Exiting program." << endl;
            break;
        }
        cout << endl;
    }
    return 0;
}