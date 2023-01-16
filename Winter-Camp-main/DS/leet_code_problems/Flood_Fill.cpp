#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

#define lli long long int
#define ll long long
#define pb push_back
#define vt vector
#define all(x) (x).begin(), (x).end()
#define sz(x) (x).size()
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define EACH(x, a) for (auto &x : a)

void solve()
{
    int n; cin >> n;
    vt<int> res;
    deque<int> q;
    FOR(i, 0, n) {
        int x; cin >> x;
        res.pb(x);
    }
    sort(all(res), greater<int> ());
    
    q.push_front(res[0]);
    
    for(int i = 1; i < res.size(); i++) {
        int val = q.back();
        q.pop_back();
        q.push_front(res[i]);
        q.push_front(val);
    }
    
    int val = q.front();
    q.pop_front();
    q.push_back(val);
    
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop_front();
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    int tc = 1;
    while (T--)
    {
        // cout << "Case #" << tc++ << ": ";
        solve();
        cout << endl;
    }
    return 0;
}
