//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    void rec(int x,int n){
        if(x>n)
            return;
        
        cout<<x<<" ";
        rec(x+1,n);
    }
    
    void printTillN(int n) {
        // Write Your Code here
        rec(1,n);
        

    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        ob.printTillN(N);
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends