#include <bits/stdc++.h>
#include <cmath>
#include <cstring>
#include <climits>
#define int long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define asc(a, n) sort(a, a + n);
#define dsc(a, n) sort(a, a + n, comp);
#define fo(i, x, y) for (int i = x; i < y; i++)
#define inarr(x) \
    int n;       \
    cin >> n;    \
    int x[n];    \
    fo(i, 0, n) { cin >> x[i]; }
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
using namespace std;

int basic()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    return 0;
}
bool comp(int a, int b) { return a > b; }

void solve()
{
    int n;
    cin >> n;
    double ans = 0.0000;
    int m;
    cin >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    dsc(arr, n);
    for (int i = 0; i < m - 1; i++)
    {
        ans += arr[i];
    }
    if ((n - m + 1) % 2 == 1)
    {
        ans = ans + arr[m - 1 + ((n - m) / 2)];
    }
    else
    {
        ans += (double)(arr[m - 1 + ((n - m) / 2)] + arr[m + ((n - m) / 2)]) / 2;
    }

    cout << fixed << setprecision(1) << ans;
}

int32_t main()
{ // basic();
    fast;
    // solve();
    int l = 1;
    test
    {
        cout << "Case #" << l << ": ";
        solve();
        cout << "\n";
        l++;
    }

    return 0;
}
