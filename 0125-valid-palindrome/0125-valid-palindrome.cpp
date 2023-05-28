class Solution {
public:
    bool isPalindrome(string s) 
    {
        string temp;
        int i = 0, j = s.size () - 1;

        while (i < j)
        {
            cout << i << " " << j << endl;
            while (i < j && !isalnum (s [i]))
                i++;
            while (i < j && !isalnum (s [j]))
                j--;

            if (tolower (s [i++]) != tolower (s [j--]))
                return false;
        }
    
        // cout << temp;
        return true;
    }
};