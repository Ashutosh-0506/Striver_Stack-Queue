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
#include <bits/stdc++.h>
using namespace std;

class Stack
{
    vector<int> v;
    int topIndex;
    int capacity;

public:
    Stack(int size)
    {
        v.resize(size);
        topIndex = -1;
        capacity = size;
    }

    void push(int val)
    {
        if (topIndex + 1 == capacity)
        { 
            return;
        }
        topIndex++;
        v[topIndex] = val;
    }

    int pop()
    {
        if (topIndex == -1)
        { 
            return -1;
        }
        int val = v[topIndex];
        topIndex--;
        return val;
    }

    int top()
    {
        if (topIndex == -1)
        {
            return -1;
        }
        return v[topIndex];
    }

    int size()
    {
        return topIndex + 1;
    }
};

int main()
{
    int n = 5;
    Stack *stack = new Stack(n);
    stack->push(1);
    stack->push(2);
    stack->push(3);
    stack->push(5);
    cout << stack->top() << endl; // 5
    stack->pop();
    cout << stack->top() << endl; // 3
    stack->push(4);
    cout << stack->top() << endl;  // 4
    cout << stack->size() << endl; // 4
    return 0;
}