class Solution {
public:
    long long int mod = 1e9 + 7;
    int f (int low, int high, int zero, int one, int len, vector <long long int> &dp)
    {
        if (len > high)
            return 0;
        
        if (dp [len] != -1)
            return dp [len];

        if (len >= low)
            return dp [len] = (1 + f (low, high, zero, one, len + zero, dp) % mod + f (low, high, zero, one, len + one, dp) % mod)%mod;
        return dp [len] = (f (low, high, zero, one, len + zero, dp) % mod + f (low, high, zero, one, len + one, dp) % mod)%mod;

        return (dp [len] % mod);
    }
    int countGoodStrings(int low, int high, int zero, int one) 
    {
        int len = 0;
        vector <long long int> dp (high + 1, -1);
        // cout << 1025022751 % mod;
        return f (low, high, zero, one, len, dp);
        // return dp []
    }
};