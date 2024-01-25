#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for two number using built in function
    int num1, num2;
    cin >> num1 >> num2;
    cout << __gcd(num1, num2) << endl;

    // for more than one number
    vector<int> num = {12, 15, 18, 21, 24};
    int ans = num[0];
    for (int i = 1; i < num.size(); i++)
        ans = __gcd(ans, num[i]);
    cout << ans << endl;

    return 0;
}
