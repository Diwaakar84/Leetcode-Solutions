class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        map <int, int> cnt;
        vector <int> maxi;
        int n = nums.size ();
        for (int i = 0; i < n; i++)
            cnt [nums [i]]++;
        for (auto i:cnt)
        {
            if (i.second > (n / 3))
                maxi.push_back (i.first);
        }
        return maxi;
    }
};