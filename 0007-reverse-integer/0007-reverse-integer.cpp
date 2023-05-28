class Solution {
public:
    int reverse (int x) 
    {
        long n = x;
        long y = 0;
        if (x < 0)
            n = -n;
        while (n > 0)
        {
            y *= 10;
            y += n % 10;
            n /= 10;
        }
        if (x < 0)
            y = -y;
        if (y < -pow(2, 31) || y > pow (2, 31) - 1)
            return 0;
        return y;
    }
};