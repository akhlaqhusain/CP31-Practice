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
    int n,k,x;
    cin>>n>>k>>x;
    vi v(n);
    take(v);
    sort(all(v));
    vi diff;
    for(int i=0;i<n-1;i++){
        if(v[i+1]-v[i]>x){
            diff.push_back(v[i+1]-v[i]);
        }
    }
    sort(all(diff));
    int ans = diff.size()+1;
    for(auto val:diff){
        int temp = (val/x)+(val%x!=0)-1;
        if(k>=temp){
            ans--;
            k -= temp;
        }
    }
    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    unsigned t=1;
    // cin>>t;
    while(t--)solve();
}
/*
    author -> akhlaqhusain
*/
 