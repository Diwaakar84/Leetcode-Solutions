class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int sum1, sum2 = 0, n = nums.size ();
        map <int, int> cnt;
        for (int i = 0; i < n; i++)
            if (++cnt [nums[i]] > 1)
                return nums [i];
            
        return 0;
    }
};