class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string (x), r = s;
        reverse (s.begin (), s.end ());
        return r == s;
    }
};