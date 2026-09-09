class Solution {
    public double myPow(double x, int n) {
        double result = 1;
        if (n < 0) {
            x = 1 / x;
            n = -n;
        }
        for(int i = 1; i <= n; i++)
        {
            result *= x;
        }
        return result;
    }
}
