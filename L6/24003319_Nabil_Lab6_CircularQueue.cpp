/*
ID: 24003319
Name: Nabil Junaidi
Group: G3
Lab: Lab 6
*/

#include <iostream>
#include <string>
using namespace std;

class CircularQueue
{
private:
    static const int MAX = 10;
    string arr[MAX];
    int front;
    int rear;
    int count;

public:
    CircularQueue()
    {
        front = 0;
        rear = 0;
        count = 0;
    }

    void enqueue(const string &name)
    {
        if (count == MAX)
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        arr[rear] = name;
        rear = (rear + 1) % MAX;
        count++;
    }

    void dequeue()
    {
        if (count == 0)
        {
            cout << "Queue Underflow" << endl;
            return;
        }
        cout << "Dequeue: " << arr[front] << endl;
        front = (front + 1) % MAX;
        count--;
    }

    void display_queue()
    {
        cout << "Array queue: ";
        for (int i = 0; i < count; ++i)
        {
            int index = (front + i) % MAX;
            cout << arr[index] << " <- ";
        }
        if (count > 0)
            cout << arr[front] << endl;
        else
            cout << "NULL" << endl;
    }
};

int main()
{
    CircularQueue q;

    q.enqueue("Ali");
    q.enqueue("Ahmed");
    q.enqueue("Alice");
    q.enqueue("Abu");

    q.display_queue();

    q.dequeue();

    cout << "After Dequeue: \n";
    q.display_queue();

    return 0;
}
