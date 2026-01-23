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
#define take(a) for(auto &x:a)cin>>x;
#define prt(a) for(auto x:a)cout<<x<<' ';cout<<endl;
#define all(a) a.begin(),a.end()
#define allr(a) a.rbegin(),a.rend()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
static constexpr auto MOD = 1000000007;

void solve()
{
    int n;cin>>n;
    vi a(n);take(a);
    vi temp(31,0);
    for(int i=0;i<n;i++){
        for(int j=30;j>=0;j--){
            if((a[i]&(1<<j))){
                temp[j]++;
                break;
            }
        }
    }
    int ans = 0;
    for(int i=0;i<31;i++){
        ans += (temp[i]*(temp[i]-1))/2;
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
 