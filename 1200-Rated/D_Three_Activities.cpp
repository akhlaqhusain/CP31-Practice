#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define allr(v) v.rbegin(),v.rend()
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
    vector<pair<int,int>> a(n),b(n),c(n);
    for(int i=0;i<n;i++){
        int x;cin>>x;a[i].first = x;a[i].second = i;
    }
    for(int i=0;i<n;i++){
        int x;cin>>x;b[i].first = x;b[i].second = i;
    }
    for(int i=0;i<n;i++){
        int x;cin>>x;c[i].first = x;c[i].second = i;
    }
    sort(allr(a));
    sort(allr(b));
    sort(allr(c));
    int ans = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(a[i].second!=b[j].second && a[i].second!=c[k].second && b[j].second!=c[k].second){
                    int temp = a[i].first+b[j].first+c[k].first;
                    ans = max(ans,temp);
                }
            }
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
 