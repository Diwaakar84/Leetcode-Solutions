class Solution {
public:
    int fib(int n) 
    {
        int a = 0, b = 1, sum = a + b;
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        for (int i = 2; i < n; i++)
        {
            a = b;
            b = sum;
            sum = a + b;
        }
        return sum;
    }
};