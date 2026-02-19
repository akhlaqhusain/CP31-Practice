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
    vi a;
    vi check;
    for(int i=0;i<n;i++){
        if(v[i]<i+1){
            a.push_back(v[i]);
            check.push_back(i+1);
        }
    }
    sort(all(a));
    int ans = 0;
    for(int i=0;i<check.size();i++){
        int ub = upper_bound(all(a),check[i]) - a.begin();
        if(ub!=a.size()){
            ans += a.size()-ub;
        }
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
 