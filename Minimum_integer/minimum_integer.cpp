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
    string num;
    int k;
    cin >> num;
    cin >> k;
    string stack; 
    for (char &digit : num)
    {
        
        while (k > 0 && !stack.empty() && stack.back() > digit)
        {
            stack.pop_back(); 
            --k;             
        }
        stack += digit; 
    }

    while (k > 0)
    {
        stack.pop_back(); 
        --k;             
    }

    int startIndex = 0; 
    while (startIndex < stack.size() && stack[startIndex] == '0')
    {
        ++startIndex;
    }

    string result = stack.substr(startIndex); 
    string s = result.empty() ? "0" : result; 

    cout << s << '\n';
}