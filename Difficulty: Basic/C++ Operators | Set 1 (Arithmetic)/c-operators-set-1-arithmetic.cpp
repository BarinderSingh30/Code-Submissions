//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    vector<int> cppOperators(int a, int b) {
        // code here
        vector<int> solution;
        
        solution.push_back(a+b);
        solution.push_back(a*b);
        
        if (a>b){
            solution.push_back(a-b);
            solution.push_back(a/b);
        }
        else{
            solution.push_back(b-a);
            solution.push_back(b/a);
        }
        return solution;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B;
        cin >> A >> B;
        Solution ob;
        vector<int> ans = ob.cppOperators(A, B);
        for (int u : ans) cout << u << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends