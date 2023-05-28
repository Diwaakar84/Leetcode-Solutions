class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        map <int, int> cnt;
        for (int i: nums)
            cnt [i]++;

        for (auto i: cnt)
            if (i.second > 1)
                return true;
        return false; 
    }
};