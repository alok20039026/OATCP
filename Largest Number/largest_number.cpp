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
static bool comp(string &s1, string &s2) { return s1 + s2 > s2 + s1; }

int main()
{
    int n;
    cin >> n;
    vector<int> num;
    for (int i = 0;i < n; i++)
    {
        cin >> num[i];
    }

    vector<string> v;
    for (int i = 0; i < num.size(); i++)
    {
        v.push_back(to_string(num[i]));
    }

    sort(v.begin(), v.end(), comp);

    string result;
    for (int i = 0; i < v.size(); i++)
    {
        result += v[i];
    }

    if (result[0] == '0')
    {
        cout << "0" << '\n';
        return 0;
    }

    cout << result << '\n';

    return 0;
}