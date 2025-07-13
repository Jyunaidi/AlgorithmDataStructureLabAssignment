/*
ID: 24003319
Name: Nabil Junaidi
Group: G3
Lab: Lab 3
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

class LinkedList
{
private:
    Node *rear;

public:
    LinkedList(Node *rear = nullptr)
    {
        this->rear = rear;
        if (rear)
            rear->next_ptr = rear;
    }

    void add_elem(Node *node)
    {
        if (!node)
            return;

        if (!rear)
        {
            rear = node;
            rear->next_ptr = rear;
        }
        else
        {
            node->next_ptr = rear->next_ptr;
            rear->next_ptr = node;
            rear = node;
        }
    }

    void delete_elem(string val)
    {
        if (!rear)
            return;

        Node *current = rear->next_ptr;
        Node *prev = rear;

        do
        {
            if (current->name == val)
            {
                if (current == rear && current == rear->next_ptr)
                {
                    delete current;
                    rear = nullptr;
                }
                else
                {
                    prev->next_ptr = current->next_ptr;
                    if (current == rear)
                        rear = prev;
                    delete current;
                }
                return;
            }
            prev = current;
            current = current->next_ptr;
        } while (current != rear->next_ptr);
    }

    void display_list()
    {
        if (!rear)
        {
            cout << "List is empty" << endl;
            return;
        }

        Node *current = rear->next_ptr;
        do
        {
            cout << current->name << " <-> ";
            current = current->next_ptr;
        } while (current != rear->next_ptr);
        cout << rear->next_ptr->name << endl;
    }
};

int main()
{
    Node *node1 = new Node("Ali");
    Node *node2 = new Node("Ahmed");
    Node *node3 = new Node("Alee");

    LinkedList linkedlst(node1);
    linkedlst.add_elem(node2);
    linkedlst.add_elem(node3);

    linkedlst.display_list();

    linkedlst.delete_elem("Ahmed");
    cout << "After deleting Ahmed: ";
    linkedlst.display_list();

    return 0;
}
