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

int bsearch(vi &a,int f,int l){
    int ans = 1;
    int last = l;
    while(f<=l){
        int mid = (f+l)/2;
        if(a[mid]>=(last-mid+1)){
            ans = last-mid+1;
            l = mid - 1;
        }else{
            f = mid + 1;
        }
    }
    return ans;
}

void solve()
{
    in(n);
    take(a,n);
    for(int i=0;i<n;i++){
        int ans = bsearch(a,0,i);
        cout<<ans<<" ";
    }
    cout<<endl;
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
 