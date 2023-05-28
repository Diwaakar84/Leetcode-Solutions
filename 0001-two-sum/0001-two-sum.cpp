class Solution 
{
public:
    vector<int> twoSum(vector<int>& a, int target) 
    {
        map <int, int> cnt;
        for (int i = 0; i < a.size (); i++)
            cnt[a[i]] = i;
        for (int i = 0; i < a.size (); i++)
            if (cnt[target - a[i]] && i != cnt[target - a[i]])
                return {i, cnt[target - a[i]]};
        return {0, 0};
    }
};