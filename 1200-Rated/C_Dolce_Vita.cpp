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

bool pf(int val,int ind,int x,int mid){
    if(val+((ind+1)*(mid-1))<=x){
        return true;
    }
    return false;
}

int bs(int val,int ind,int x){
    int l = 1,h = 1e9+5;
    int ans = 0;
    while(l<=h){
        int mid = (l+h)/2;
        if(pf(val,ind,x,mid)){
            ans = mid;
            l = mid+1;
        }else{
            h = mid-1;
        }
    }
    return ans;
}

void solve()
{
    int n,x;
    cin>>n>>x;
    vi a(n);
    take(a);
    sort(all(a));
    vi pre(n);
    pre[0] = a[0];
    for(int i=1;i<n;i++){
        pre[i] = a[i] + pre[i-1];
    }
    int sugar_pack_cnt = 0;
    for(int i=0;i<n;i++){
        sugar_pack_cnt += bs(pre[i],i,x);
    }
    cout<<sugar_pack_cnt<<endl;
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
 