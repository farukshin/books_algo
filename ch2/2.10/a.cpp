// https://codeforces.com/contest/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;

    while (cin.good())
    {
        cin >> s;
        int k = 0;
        bool success = true;
        for (int i = 0; i < s.length() && success; i++)
        {
            if (s[i] == '(')
                k++;
            else if (s[i] == ')')
                k--;

            if (k < 0)
                success = false;
        }

        cout << (success && k == 0 ? 1 : 0) << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("a-input-1.txt", "r", stdin);
    //freopen("a-output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}
