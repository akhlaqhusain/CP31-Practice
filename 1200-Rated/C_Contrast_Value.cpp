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

    vi b(n);
    take(b);

    if(n==1){
        cout<<1<<endl;
        return;
    }

    vi a;
    for(int i=0;i<n-1;i++){
        while(b[i]==b[i+1] && i<n-1){
            i++;
        }
        a.push_back(b[i]);
    }

    if(a[a.size()-1]!=b[n-1]){
        a.push_back(b[n-1]);
    }

    n = a.size();
    
    if(n==1){
        cout<<1<<endl;
        return;
    }

    vi ans;
    ans.push_back(a[0]);
    ans.push_back(a[1]);

    for(int i=2;i<n;i++){
        if(ans[ans.size()-2] < ans[ans.size()-1] && ans[ans.size()-1] < a[i]){
            ans[ans.size()-1] = a[i];
            continue;
        }
        if(ans[ans.size()-2] > ans[ans.size()-1] && ans[ans.size()-1] > a[i]){
            ans[ans.size()-1] = a[i];
            continue;
        }
        ans.push_back(a[i]);
    }
    
    cout<<ans.size()<<endl;
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
 