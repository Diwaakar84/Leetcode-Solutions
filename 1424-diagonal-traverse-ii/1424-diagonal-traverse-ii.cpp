class Solution {
public:
    vector<int> findDiagonalOrder(vector <vector <int>>& mat) 
    {
        int m = mat.size (), i, j;
        map <int, vector <int>> pos;
        vector <int> res;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < mat [i].size (); j++)
                pos [i + j].push_back (mat [i][j]);
        }

        for (auto i: pos)
        {
            //cout << i.first << ": ";
            //if (i.first & 1)
            reverse (i.second.begin (), i. second.end ());
            for (auto j: i.second)
                res.push_back (j);
            cout << endl;
        }
        return res;
    }

};