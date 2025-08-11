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

class MyStack
{
    queue<int> q;

public:
    void push(int x)
    {
        q.push(x);
        int size = q.size();
        // Rotate elements to bring new element to the front
        for (int i = 0; i < size - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    void pop()
    {
        if (!q.empty())
            q.pop();
    }

    int top()
    {
        return q.empty() ? -1 : q.front();
    }

    bool empty()
    {
        return q.empty();
    }
};

int main()
{
    MyStack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.top() << "\n"; // 3
    st.pop();
    cout << st.top() << "\n"; // 2
}
