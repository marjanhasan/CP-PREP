#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n <= 0)
            return false;
        // without looping
        if ((n & (n - 1)) == 0)
            return true;
        else
            return false;

        // using right shift
        int cnt = 0;
        while (n)
        {
            if ((n & 1) != 0)
                cnt++;
            n = n >> 1;
        }
        return cnt == 1;
    }
};
int main()
{

    return 0;
}
