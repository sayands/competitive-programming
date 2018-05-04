class Solution
{
  public:
    vector<int> plusOne(vector<int> &digits)
    {

        int carry = 1;
        vector<int> result(digits.size());

        if (digits.size() == 0)
            return result;

        for (int i = digits.size() - 1; i >= 0; i--)
        {
            int temp = carry + digits[i];
            carry = temp / 10;
            result[i] = temp % 10;
        }

        if (carry)
            result.insert(result.begin(), carry);
        return result;
    }
};