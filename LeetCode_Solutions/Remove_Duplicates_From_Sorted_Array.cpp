// 26 - Remove Duplicates From Sorted Array

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int index = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[index] != nums[i])
            {
                index++;
                nums[index] = nums[i];
            }
        }
        return index+1;
    }
};