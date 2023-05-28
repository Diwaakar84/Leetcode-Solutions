class Solution {
public:
    vector<int> circularGameLosers(int n, int k) 
    {
        vector <int> check (n, 0), ans;
        int ind = 0, i = 1;
        
        while (check [ind] != 1)
        {
            check [ind] = 1;
            ind += i * k;
            ind = ind % n;
            i++;
            // cout << ind << " ";
        }
        
        for (int j = 0; j < n; j++)
            if (!check [j])
                ans.push_back (j + 1);
        return ans;
    }
};