//128 - Self Dividing Numbers


class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector <int> res;
        
        for(int i=left,n=0;i<=right;i++)
        {
            for(n=i;n>0;n/=10)
                if(n%10 == 0 || i%(n%10) != 0)
                    break;
            if(n==0)
                res.push_back(i);
        }
        return res;
            
    }
};