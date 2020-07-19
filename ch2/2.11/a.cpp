// https://codeforces.com/contest/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    cin >> s;

    stack<char> st;
    map<char, char> mp = {
        {'(', ')'},
        {'[', ']'},
        {'{', '}'},
        {'<', '>'},
    };

    bool success = true;
    for (int i = 0; i < s.length() && success; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '<' || s[i] == '{')
        {
            st.push(mp[s[i]]);
            continue;
        }

        if (st.empty())
        {
            success = false;
            continue;
        }

        char ch = st.top();
        st.pop();

        bool close = ch == s[i];
        if (!close)
            success = false;
    }

    if (success && !st.empty())
        success = false;

    cout << (success ? 1 : 0) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("a-input-1.txt", "r", stdin);
    //freopen("a-output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
