class Solution {
public:
    bool isPalindrome(int x) {
        long rev = 0;
        long temp = x;
        if(x<0){
            return false;
        }
        while (temp!=0){
            int ld = temp%10;
            temp/=10;

            rev = (rev*10)+ld;

        }

        if (rev ==x)
            return true;
        else
            return false;
    }
};