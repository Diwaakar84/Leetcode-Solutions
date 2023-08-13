//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        if (n < 2)
            return n;
            
        int x = 0, y = 1, sum;
        for (int i = 2; i <= n; i++)
        {
            sum = (x + y) % 1000000007;
            x = y;
            y = sum;
        }
        return sum % 1000000007;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends