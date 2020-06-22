class Solution
{
public:
    int findSpecialInteger(vector<int> &arr)
    {
        map<int, int> mp;
        for (auto i : arr)
        {
            mp[i]++;
        }
        for (auto it : mp)
        {
            double qq = (double)it.second / (double)arr.size();
            if (qq > 0.25)
            {
                return it.first;
            }
        }
        return 0;
    }
};