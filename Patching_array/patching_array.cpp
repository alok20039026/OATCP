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

int main()
{
    int s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < s; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int n;
    cin >> n;
    long p = 0, c = 1, x = 0;
    while (c <= n)
    {
        if (x < s && v[x] <= c)
            c += v[x++];
        else
        {
            c *= 2;
            p++;
        }
    }
    cout << p << endl;

    return 0;
}