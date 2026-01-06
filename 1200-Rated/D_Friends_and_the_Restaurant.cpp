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
    int n;
    cin>>n;
    vi x(n),y(n);
    take(x);
    take(y);
    vi diff(n);
    for(int i=0;i<n;i++){
        diff[i] = (y[i]-x[i]);
    }
    sort(all(diff));
    int fp = 0,lp = n-1;//first and last pointer
    int ans = 0;
    while(fp<lp){
        if(diff[fp]+diff[lp]>=0){
            ans++;
            fp++;
            lp--;
        }else{
            fp++;
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
 