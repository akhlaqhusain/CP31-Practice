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
    char c;
    string s;
    cin>>n>>c>>s;
    int cnt = count(all(s),c);
    if(cnt==n){
        cout<<0<<endl;
    }else{
        int ind = -1;
        for(int i=n-1;i>=0;i--){
            if(s[i]==c){
                ind = i;
                break;
            }
        }
        if(ind==-1){
            cout<<2<<endl;
            cout<<n-1<<" "<<n<<endl;
        }else{
            ind++;//for 1-based indexing
            if(ind*2<=n){
                cout<<2<<endl;
                cout<<n-1<<" "<<n<<endl;
            }else{
                cout<<1<<endl;
                cout<<ind<<endl;
            }
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
 