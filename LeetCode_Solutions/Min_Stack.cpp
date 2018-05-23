// 155 - Min Stack
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
x
class MinStack
{
    stack<int> st;
    stack<int> minst;

  public:
    /** initialize your data structure here. */
    MinStack()
    {
    }

    void push(int x)
    {
        st.push(x);

        int curMin = INT_MAX;
        if (!minst.empty())
            curMin = minst.top();
        if (x <= curMin)
            minst.push(x);
    }

    void pop()
    {
        if (!st.empty())
        {
            int v = st.top();
            st.pop();
            if (v == minst.top())
                minst.pop();
        }
    }

    int top()
    {
        return st.top();
    }

    int getMin()
    {
        return minst.top();
    }
};
