// 461 - Hamming Distance Between 2 integers

class Solution {
public:
    int hammingDistance(int x, int y) {
        int r = x^y;
        int count = 0;
        for(;r>0;r>>=1)
        {
            count+=r&1;
        }
        return count;
    }
};