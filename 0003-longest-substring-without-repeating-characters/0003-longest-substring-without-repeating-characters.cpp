class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int i = 0, j = 0, n = s.size (), len = 0, maxi = 0;
        map <char, int> cnt;

        while (j < n)
        {
            if (!cnt [s [j]])
            {
                cnt [s [j++]]++;
                len++;
            }
            else
            {
                maxi = max (maxi, len);
                
                while (s [i] != s [j])
                {
                    cnt [s [i++]]--;
                    len--;
                }
                len--;
                cnt [s [i++]]--;
            }
            // cout << i << " " << j << ": " << len << endl;
        }
        // while (i < n)
        // {
            
        // }
        // cout << i << " " << j << endl;
        maxi = max (maxi, len);
        return maxi;
    }
};