#include <bits/stdc++.h>
using namespace std;
int sum(stack<int> s)
{
    int cnt = 0;
    while (!s.empty())
    {
        cnt += s.top();
        s.pop();
    }
    return cnt;
}
int maxSum(stack<int> &s1, stack<int> &s2, stack<int> &s3)
{
    // Write your code here
    int sumA = sum(s1), sumB = sum(s2), sumC = sum(s3);
    while (true)
    {
        if (sumA == sumB && sumB == sumC)
            break;
        if (sumA >= sumB && sumA >= sumC)
        {
            sumA -= s1.top();
            s1.pop();
        }
        else if (sumB >= sumA && sumB >= sumC)
        {
            sumB -= s2.top();
            s2.pop();
        }
        else
        {
            sumC -= s3.top();
            s3.pop();
        }
    }
    return sumA;
}
int main()
{

    return 0;
}
