class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) 
    {
        int n = nums.size (), m = nums [0].size (), sum = 0;
        
        for (int i = 0; i < n; i++)
            sort (nums [i].begin (), nums [i].end (), greater <int> ());
        
        for (int j = 0; j < m; j++)
        {
            set <int, greater <int>> temp;
            for (int i = 0; i < n; i++)
                temp.insert (nums [i][j]);
            sum += *temp.begin ();
        }
        return sum;
    }
};