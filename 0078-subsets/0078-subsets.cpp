class Solution {
public:
    void f (int i, vector <int> &nums, vector <int> &temp, vector <vector <int>> &ans)
    {
      if (i == nums.size ())
      {
        ans.push_back (temp);
        return;
      }

        
          // return;

        temp.push_back (nums [i]);
        f (i + 1, nums, temp, ans);
        temp.pop_back ();
        f (i + 1, nums, temp, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector <int> temp;
        vector <vector <int>> ans;

        f (0, nums, temp, ans);
        return ans;
    }
};