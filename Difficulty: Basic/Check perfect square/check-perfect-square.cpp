//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution{   
public:
    int checkPerfectSquare(int N){
        // code here 
        if (double(pow(N,0.5)) == int(round(pow(N,0.5))))
            return 1;
        else return 0;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.checkPerfectSquare(N) << endl;
    
cout << "~" << "\n";
}
    return 0; 
} 
// } Driver Code Ends