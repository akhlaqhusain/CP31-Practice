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
    vi v(n);
    take(v);
    if(v[n-2]>v[n-1]){
        cout<<-1<<endl;
    }else if(v[n-1]>=0){
        cout<<n-2<<endl;
        for(int i=1;i<=n-2;i++){
            cout<<i<<" "<<n-1<<" "<<n<<endl;
        }
    }else{
        if(is_sorted(all(v))){
            cout<<0<<endl;
        }else{
            cout<<-1<<endl;
        }
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
 