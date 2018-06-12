// 232 - Implement Queue using Stacks

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
  public:
    stack<int> s1;
    stack<int> s2;
    /** Initialize your data structure here. */
    MyQueue()
    {
    }

    /** Push element x to the back of queue. */
    void push(int x)
    {
        s1.push(x);
    }
    void populateStack()
    {
        while (!s1.empty())
        {
            int val = s1.top();
            s1.pop();
            s2.push(val);
        }
    }
    /** Removes the element from in front of queue and returns that element. */
    int pop()
    {
        if (s2.empty())
            populateStack();
        int val = s2.top();
        s2.pop();
        return val;
    }

    /** Get the front element. */
    int peek()
    {
        if (s2.empty())
            populateStack();
        int val = s2.top();
        return val;
    }

    /** Returns whether the queue is empty. */
    bool empty()
    {
        return s1.empty() && s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */