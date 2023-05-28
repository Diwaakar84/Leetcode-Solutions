class Solution 
{
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int n = matrix.size (), m = matrix [0].size ();
        vector <vector <int>> zeroes;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (matrix [i][j] == 0)
                    zeroes.push_back ({i, j});
        
        for (int i = 0; i < zeroes.size (); i++)
        {
                for (int k = 0; k < n; k++)
                    matrix [k][zeroes [i][1]] = 0;
                for (int k = 0; k < m; k++)
                    matrix [zeroes [i][0]][k] = 0;        
        }
    }
};