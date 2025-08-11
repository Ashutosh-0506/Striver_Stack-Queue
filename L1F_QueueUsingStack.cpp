//***********************************ASHUTOSH KUMAR***********************************//
/*
कर्मण्येवाधिकारस्ते मा फलेषु कदाचन।
मा कर्मफलहेतुर्भूर्मा ते सङ्गोऽस्त्वकर्मणि॥

Karmanye vadhikaraste Ma Phaleshu Kadachana,
Ma Karmaphalaheturbhurma Te Sangostvakarmani,

The meaning of the verse is:—
You have the right to work only but never to its fruits.
Let not the fruits of action be your motive, nor let your attachment be to inaction.
*/
#include <bits/stdc++.h>
using namespace std;

class MyQueue {
    stack<int> s1, s2;

public:
    void push(int x) {
        // Move all elements from s1 to s2
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        // Push new element into s1
        s1.push(x);
        // Move back all elements from s2 to s1
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    void pop() {
        if (!s1.empty()) s1.pop();
    }

    int front() {
        return s1.empty() ? -1 : s1.top();
    }

    bool empty() {
        return s1.empty();
    }
};

int main() {
    MyQueue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.front() << "\n"; // 1
    q.pop();
    cout << q.front() << "\n"; // 2
}
