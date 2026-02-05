#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define vi vector<int>
#define pii pair<int,int>
#define in(n) int n;cin>>n;
#define get(s) string s;cin>>s;
#define take(v,n) vector<int> v(n);for(auto &x:v)cin>>x;
#define prt(v) for(auto x:v)cout<<x<<' ';cout<<endl;
#define all(v) v.begin(),v.end()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define MOD (int)1e9+7
#define INF (int)1e18

void solve()
{
    in(n);
    take(v,n);
    vi p_eve(n, 0), p_odd(n, 0);

    p_eve[0] = v[0];
    int flag = 0;
    map<int, int> mp;

    mp[p_odd[0] - p_eve[0]]++;

    for (int i = 1; i < n; i++)
    {
        p_odd[i] += p_odd[i - 1];
        p_eve[i] += p_eve[i - 1];

        (i%2)?p_odd[i]+=v[i]:p_eve[i]+=v[i];

        mp[p_odd[i]-p_eve[i]]++;

        if (mp[p_odd[i]-p_eve[i]] == 2 || p_odd[i]-p_eve[i] == 0)
        {
            flag = 1;
            break;
        }
    }
    auto verify = [&](int ans){
        if(ans)cout<<"YES\n";
        else cout<<"NO\n";
    };
    verify(flag);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    unsigned t=1;
    cin>>t;
    while(t--)solve();
}
/*
    author -> akhlaqhusain
*/
 