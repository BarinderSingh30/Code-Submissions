//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++

class Solution {
    public:
    int repeatedSubtraction(int a,int b){
        //code here
        int steps = 0;
        
        while (a!=0 && b!=0)
        {
            if (a>b)
                a = a-b;
            else
                b = b-a;
            
            steps++;
        }
        return steps;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int A,B;
        cin>>A>>B;
        Solution ob;
        cout<<ob.repeatedSubtraction(A,B)<<"\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends