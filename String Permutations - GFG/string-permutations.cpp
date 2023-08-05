//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void f (int i, string &S, vector <string> &res)
    {
        if (i == S.size ())
        {
            // cout << "&";
            res.push_back (S);
            return;
        }
        
        for (int j = i; j >= 0; j--)
        {
            swap (S [i], S [j]);
            // cout << S << endl;
            f (i + 1, S, res);
            swap (S [i], S [j]);
            // f (i + 1, S, res);
        }
    }
    
    vector<string> permutation(string S)
    {
        //Your code here
        vector <string> res;
        f (0, S, res);
        sort (res.begin (), res.end ());
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends