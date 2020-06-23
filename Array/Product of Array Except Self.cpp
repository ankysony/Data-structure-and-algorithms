// Given an array nums of n integers where n > 1, return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &a)
    {
        vector<int> left, right, ans;
        int n = a.size();
        int d = 1;
        for (int i = 0; i < n; i++)
        {
            d = d * a[i];
            left.push_back(d);
        }
        d = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            d = d * a[i];
            right.push_back(d);
        }

        reverse(right.begin(), right.end());
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                ans.push_back(right[i + 1]);
            }
            else if (i == n - 1)
            {
                ans.push_back(left[i - 1]);
            }
            else
            {
                ans.push_back(right[i + 1] * left[i - 1]);
            }
        }
        return ans;
    }
};