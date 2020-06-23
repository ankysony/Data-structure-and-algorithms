/*Given an integer array sorted in non-decreasing order, there is exactly one integer in the array that occurs more than 25% of the time.
Return that integer.
*/
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