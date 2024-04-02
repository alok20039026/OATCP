#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<long long int>
#define srv(v) sort(v.begin(), v.end())
#define drv(v) sort(v.begin(), v.end(), greater<int>());
#define sz size()
#define str string
#define sum(a) accumulate(a.begin(), a.end(), 0)
#define dv(v) vector<int> v
#define ds(s) set<int> s
/*==============================gcd= __gcd(n,m)=============================================*/
void dark_knight()
{
    int coins, n;
    cin >> n;
    vector<int> costs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> costs[i];
    }
    cin >> coins;
    sort(costs.begin(), costs.end());

    int numIceCreams = 0;

    for (int cost : costs)
    {
        if (coins < cost)
            break;

        coins -= cost;
        numIceCreams++;
    }
    cout << numIceCreams << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    // ll t;
    // cin >> t; // ll count = 1;

    // while (t--)
    // {
        // cout << "Case #" << count << ": ";
        dark_knight();
        // count++;
    // }

    return 0;
}