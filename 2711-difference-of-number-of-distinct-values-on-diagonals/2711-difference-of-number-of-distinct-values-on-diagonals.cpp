class Solution {
public:
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) 
    {
        int m = grid.size (), n = grid [0].size ();
        vector <vector <int>> res (m, vector <int> (n, 0));
        
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int x = 0, y = 0, posx = i - 1, posy = j - 1;
                set <int> ans;
                
                while (posx > -1 && posy > -1)
                    ans.insert (grid [posx--][posy--]);
                x = ans.size ();
                
                posx = i + 1;
                posy = j + 1;
                ans.clear ();
                
                while (posx < m && posy < n)
                    ans.insert (grid [posx++][posy++]);
                y = ans.size ();
                
                res [i][j] = abs (x - y);
            }
        }
        
        return res;
    }
};