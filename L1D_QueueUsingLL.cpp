//***********************************ASHUTOSH KUMAR***********************************//
/*
कर्मण्येवाधिकारस्ते मा फलेषु कदाचन।
मा कर्मफलहेतुर्भूर्मा ते सङ्गोऽस्त्वकर्मणि॥

Karmanye vadhikaraste Ma Phaleshu Kadachana,
Ma Karmaphalaheturbhurma Te Sangostvakarmani,

The meaning of the verse is :—
You have the right to work only but never to its fruits.
Let not the fruits of action be your motive, nor let your attachment be to
inaction
*/
#include <bits/stdc++.h>
using namespace ::std;
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class Queue
{
private:
    Node *start;
    Node *end;
    int count; // keeps track of size

public:
    Queue()
    {
        start = nullptr;
        end = nullptr;
        count = 0;
    }

    void enqueue(int value)
    {
        Node *newNode = new Node(value);
        if (end == nullptr)
        { // empty queue
            start = end = newNode;
        }
        else
        {
            end->next = newNode;
            end = newNode;
        }
        count++;
        cout << value << " enqueued\n";
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow\n";
            return;
        }
        Node *temp = start;
        start = start->next;

        if (start == nullptr)
        {
            end = nullptr;
        }

        cout << temp->data << " dequeued\n";
        delete temp;
        count--;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return -1;
        }
        return start->data;
    }

    bool isEmpty()
    {
        return count == 0;
    }

    int size()
    {
        return count;
    }

    ~Queue()
    {
        while (!isEmpty())
        {
            dequeue();
        }
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Queue size: " << q.size() << "\n";
    cout << "start element: " << q.peek() << "\n";

    q.dequeue();
    cout << "Queue size: " << q.size() << "\n";

    return 0;
}
