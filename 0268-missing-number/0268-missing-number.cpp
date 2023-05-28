class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int i, sum = 0, n = nums.size ();
        for (i = 0; i < n; i++)
            sum += nums [i];
        return n * (n + 1) / 2 - sum;
    }
};