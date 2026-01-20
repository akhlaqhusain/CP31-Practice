#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define vi vector<int>
#define vvi vector<vector<int>>
#define mii map<int,int>
#define umii unordered_map<int,int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define take(v) for(auto &x:v)cin>>x;
#define prt(v) for(auto x:v)cout<<x<<' ';cout<<endl;
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
static constexpr auto MOD = 1000000007;

void solve()
{
    int n,m;cin>>n>>m;
    vi a(n);
    take(a);

    vi rem(m);
    for(int i=0;i<n;i++)
    {
        rem[a[i]%m]++;
    }

    int ans = 0;
    for(int i=0;i<m;i++)
    {
        int temp = rem[i],temp2 = rem[(m-i)%m];
        if(temp==temp2 && temp==0)continue;

        int temp3 = min(temp,temp2);
        temp -= min(temp3+1,temp);
        temp2 -= min(temp3+1,temp2);
        ans++;

        ans += (temp+temp2);
        rem[i] = 0;
        rem[(m-i)%m] = 0;
    }
    cout<<ans<<endl;
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
 