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
    int n,m;
    cin>>n>>m;
    vi infected_houses(m);
    take(infected_houses);
    sort(all(infected_houses));
    vi diff;
    for(int i=0;i<m-1;i++){
        diff.push_back(infected_houses[i+1]-infected_houses[i]-1);
    }
    diff.push_back(infected_houses[0]+n-infected_houses[m-1]-1);
    sort(allr(diff));
    int saved = 0;
    int days = 0;
    for(auto it:diff){
        int val = it - (2*days);
        if(val>0){
            if(val==1){
                saved++;
                days++;
            }else{
                saved+=val-1;
                days+=2;
            }
        }
    }
    int ans = n - saved;
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