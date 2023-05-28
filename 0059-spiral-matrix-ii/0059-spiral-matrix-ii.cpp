class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        int left = 0, right = n - 1, top = 0, bottom = n - 1, dir = 1, x = 1;
        vector <vector <int>> res (n, vector <int> (n, 0));
        while (x <= n * n)
        {
            // cout << x << " ";
            if (dir == 1)
            {
                for (int i = left; i <= right; i++)
                    res [top][i] = x++;
                top++;
                //x++;
                //left = 0;
                dir = 2;
            }
            else if (dir == 2)
            {
                for (int i = top; i <= bottom; i++)
                    res [i][right] = x++;
                right--;
                // x++;
                //top = 0;
                dir = 3;
            }
            else if (dir == 3)
            {
                for (int i = right; i >= left; i--)
                    res [bottom][i] = x++;
                //right = n - 1;
                // x++;
                bottom--;
                dir = 4;
            }
            else if (dir == 4)
            {
                for (int i = bottom; i >= top; i--)
                    res [i][left] = x++;
                left++;
                // x++;
                //bottom = m - 1;
                dir = 1;
            }
        }
        // for (auto i: res)
        //     cout << i << " ";
        return res;
    
    }
};