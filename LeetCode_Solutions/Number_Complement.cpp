// 476 - Number Complement

#include <math.h>

class Solution {
public:
    int findComplement(int num) {
        int number_of_bits = floor(log2(num)) + 1;
        int res = num ^ (int)(pow(2,number_of_bits)-1);
        
        return res;
    }
};