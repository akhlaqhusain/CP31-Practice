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
    vi a(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    int x=1,y=-1;
    vpii temp;
    for(int i=2;i<=n;i++){
        if(a[i]!=a[1]){
            temp.push_back({1,i});
            y = i;
            break;
        }
    }
    if(y==-1){
        no;
        return;
    }
    for(int i=2;i<=n;i++){
        if(i==y)continue;
        (a[i]!=a[x])?temp.push_back({x,i}):temp.push_back({y,i});
    }
    yes;
    for(auto val:temp){
        cout<<val.first<<" "<<val.second<<endl;
    }
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
 