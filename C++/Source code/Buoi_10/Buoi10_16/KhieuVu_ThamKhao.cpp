#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<m; i++) cin >> b[i];
    sort (a, a+n);
    sort (b, b+m);
    int res=0;
    for (int i=0; i<n; i++)
    {
        if (a[i] > b[res]) res++;
    }
    cout << res;
}