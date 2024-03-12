#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        int MOD = 1e9 + 7;
        cin >> n;
        if (n < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            vector<int> dp(n + 1, 0);

            dp[0] = 1;

            for (int i = 1; i <= n; i++)
            {

                for (int j = 1; j <= 6; j++)
                {
                    if (i - j >= 0)
                    {
                        dp[i] += dp[i - j];
                        dp[i] = dp[i] % MOD;
                    }
                }
            }
            cout << dp[n] << endl;
        }
    }
    return 0;
}