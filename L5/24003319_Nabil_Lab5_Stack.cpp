/*
ID: 24003319
Name: Nabil Junaidi
Group: G3
Lab: Lab 5
*/

#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    string name;
    Node *next_ptr;

    Node(string name, Node *next_ptr = nullptr)
    {
        this->name = name;
        this->next_ptr = next_ptr;
    }
};

class Stack
{
private:
    Node *top;

public:
    Stack(Node *top = nullptr)
    {
        this->top = top;
    }

    void push(Node *node)
    {
        if (!node)
            return;

        node->next_ptr = top;
        top = node;
    }

    void peek()
    {
        if (!top)
        {
            cout << "Top element: None" << endl;
        }
        else
        {
            cout << "Top element: " << top->name << endl;
        }
    }

    void pop()
    {
        if (!top)
            return;

        Node *temp = top;
        top = top->next_ptr;
        delete temp;
    }

    void display_stack()
    {
        Node *current = top;
        cout << "Stack: ";
        while (current != nullptr)
        {
            cout << current->name;
            if (current->next_ptr)
                cout << " -> ";
            current = current->next_ptr;
        }
        cout << endl;
    }
};

int main()
{
    Node *node1 = new Node("Ali");
    Node *node2 = new Node("Ahmed");
    Node *node3 = new Node("Alice");

    Stack stack;
    stack.push(node1);
    stack.push(node2);
    stack.push(node3);

    stack.display_stack();

    stack.peek();

    cout << "Stack after peek: ";
    stack.display_stack();

    stack.pop();
    cout << "After popping top element: ";
    stack.display_stack();

    return 0;
}
