class Solution {
public:
    static bool sortCond (vector <int> &a, vector <int> &b)
    {
        return a [0] < b [0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        sort (intervals.begin (), intervals.end (), sortCond);
        vector <vector <int>> res;
        res.push_back (intervals [0]);
        for (int i = 1; i < intervals.size (); i++)
        {
            if (res.back ()[1] >= intervals [i][0])
            {
                int x = res.back () [0];
                if (res.back ()[1] >= intervals [i][1])
                    continue;
                res.pop_back ();
                res.push_back ({x, intervals [i][1]});
            }
            else
                res.push_back (intervals [i]);
        }
        return res;
    }
};