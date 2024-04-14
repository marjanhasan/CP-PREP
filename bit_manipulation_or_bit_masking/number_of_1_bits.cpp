#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int cnt = 0;

        // using left shift operator
        // for (int i = 0; i < 32; i++)
        // {
        //     int x = (1 << i);
        //     if ((n & x) != 0)
        //         cnt++;
        // }

        // using right shift operator
        while (n != 0)
        {
            if ((n & 1) != 0)
                cnt++;
            n = n >> 1;
        }
        return cnt;
    }
};
int main()
{

    return 0;
}
