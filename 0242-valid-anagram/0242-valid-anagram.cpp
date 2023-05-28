class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        map <char, int> cnt;
        if (t.length () != s.length ())
            return false;

        for (char i: s)
            cnt [i]++;
        for (char i: t)
            if (!cnt [i]--)
                return false;
        return true;
    }
};