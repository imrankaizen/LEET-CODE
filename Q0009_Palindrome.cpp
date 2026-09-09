//Given an integer x, return true if x is a palindrome, and false otherwise.
class Solution {
public:
    bool isPalindrome(int x) {
        int x2 = x;
        long sum=0;
        if(x < 0 || (x%10 == 0 && x != 0)) { return false; }
        while(x > 0) {
            sum = sum*10+(x%10);
            x = x/10;
        }
        return (sum == x2)?true:false;
    }
};
