// User function template for C++
class Solution {
  public:
    int search(int n, int arr[]) {
        // code
        int xoor=0;
        
        for(int i =0;i<n;i++){
            xoor = xoor^arr[i];
        }
        
        return xoor;
    }
};