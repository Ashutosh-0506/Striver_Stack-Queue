#include <bits/stdc++.h>
using namespace std;

class Queue
{
    vector<int> v;
    int start;
    int end;
    int capacity;
    int count; // number of elements

public:
    Queue(int size)
    {
        v.resize(size);
        start = 0;
        end = -1;
        capacity = size;
        count = 0;
    }

    void push(int val)
    {
        if (count == capacity) // Queue full
        {
            cout << "Queue Overflow\n";
            return;
        }
        end = (end + 1) % capacity;
        v[end] = val;
        count++;
    }

    int pop()
    {
        if (count == 0) // Empty
        {
            cout << "Queue Underflow\n";
            return -1;
        }
        int val = v[start];
        start = (start + 1) % capacity;
        count--;
        return val;
    }

    int front()
    {
        if (count == 0)
        {
            cout << "Queue is Empty\n";
            return -1;
        }
        return v[start];
    }

    int size()
    {
        return count;
    }

    bool empty()
    {
        return count == 0;
    }

    bool full()
    {
        return count == capacity;
    }
};

int main()
{
    Queue q(5);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << q.front() << endl; // 1
    q.pop(); // remove 1
    q.pop(); // remove 2
    q.pop(); // remove 3
    q.pop(); // remove 4

    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9); // Works fine now

    while (!q.empty())
    {
        cout << q.pop() << " ";
    }
    cout << endl;

    return 0;
}
