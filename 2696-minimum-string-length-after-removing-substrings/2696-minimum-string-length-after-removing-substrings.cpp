class Solution {
public:
    
    bool modify (string &s, string t)
    {
        auto pos = s.find (t);
        // cout << s << " " << t << endl;
        if (pos != string::npos)
        {
            s.erase (pos, t.size ());
            // cout << s << "%\n";
            return true;
        }
        return false;
    }
    
    int minLength(string s) 
    {
        while (modify (s, "AB") || modify (s, "CD"));
        return s.size ();
    }
};