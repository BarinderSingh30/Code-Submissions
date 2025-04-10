//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int middle(int a, int b, int c) {
        // code here
        if (a>b && a>c){
            if (b>c)
                return b;
            else
                return c;
        }
        else if (b>a && b>c){
            if (a>c)
                return a;
            else
                return c;
        }
        
        else if (c>a && c>b){
            if (a>b)
                return a;
            else 
                return b;
            
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B, C;
        cin >> A >> B >> C;
        Solution ob;
        cout << ob.middle(A, B, C) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends