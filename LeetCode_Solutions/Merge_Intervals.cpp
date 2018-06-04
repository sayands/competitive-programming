//56 - Merge Intervals
/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    vector<Interval> merge(vector<Interval> &ins)
    {
        if (ins.empty())
            return vector<Interval>{};
        vector<Interval> res;
        sort(ins.begin(), ins.end(), [](Interval a, Interval b) { return a.start < b.start; });
        res.push_back(ins[0]);
        for (int i = 1; i < ins.size(); i++)
        {
            if (res.back().end < ins[i].start)
                res.push_back(ins[i]);
            else
                res.back().end = max(ins[i].end, res.back().end);
        }
        return res;
    }
};