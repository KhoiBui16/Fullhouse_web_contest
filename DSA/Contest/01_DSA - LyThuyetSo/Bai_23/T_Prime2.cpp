#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool IsPrime(ll n)
{
    if (n < 2)
        return false;
    for (ll i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    ll n;
    cin >> n;
    int cnt = 0;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (IsPrime(i))
            cnt++;
    }
    cout << cnt;
    return 0;
}