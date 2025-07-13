/*
ID: 24003319
Name: Nabil Junaidi
Group: G3
Lab: Lab 6
*/

#include <iostream>
#include <string>
using namespace std;

class Queue
{
private:
    static const int MAX = 10;
    string arr[MAX];
    int front;
    int rear;

public:
    Queue()
    {
        front = 0;
        rear = 0;
    }

    void enqueue(const string &name)
    {
        if (rear >= MAX)
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        arr[rear++] = name;
    }

    void dequeue()
    {
        if (front == rear)
        {
            cout << "Queue Underflow" << endl;
            return;
        }
        cout << "Dequeue: " << arr[front] << endl;
        front++;
    }

    void display_queue()
    {
        cout << "Array queue: ";
        for (int i = front; i < rear; ++i)
        {
            cout << arr[i] << " <- ";
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    Queue q;

    q.enqueue("Ali");
    q.enqueue("Ahmed");
    q.enqueue("Alice");
    q.enqueue("Abu");

    q.display_queue();

    q.dequeue();

    cout << "After Dequeue: ";
    q.display_queue();

    return 0;
}
