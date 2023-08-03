//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        
        vector <vector <pair <int, int>>> adj (N);
        
        for (auto i: edges)
        {
            if (adj [i [0]].empty ())
                adj.push_back ({});
            adj [i [0]].push_back ({i [1], i [2]});
        }
        
        queue <pair <int, int>> q;
        vector <int> dist (N, INT_MAX), visited (N, 0);
        dist [0] = 0;
        q.push ({0, 0});
        visited [0] = 1;
        
        while (!q.empty ())
        {
            int curr = q.front ().first, dis = q.front ().second;
            q.pop ();
            
            for (auto i: adj [curr])
            {
                if (dis + i.second < dist [i.first])
                {
                    dist [i.first] = dis + i.second;
                    q.push ({i.first, dis + i.second});
                }
            }
        }
        
        for (int i = 0; i < N; i++)
            if (dist [i] == INT_MAX)
                dist [i] = -1;
        return dist;    
            
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends