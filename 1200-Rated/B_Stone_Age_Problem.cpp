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
    int n,q;
    cin>>n>>q;
    vi a(n);
    take(a);
    int curr_sum = accumulate(all(a),0ll);
    mii mp;
    int prev_x = -1;
    while(q--){
        int t;
        cin>>t;
        mii temp;
        if(t==1){
            int i,x;
            cin>>i>>x;
            if(prev_x==-1){
                curr_sum -= a[i-1];
                curr_sum += x;
                a[i-1]  = x;
                cout<<curr_sum<<endl;
            }else{
                if(mp.find(i)==mp.end()){
                    curr_sum -= prev_x;
                    curr_sum += x;
                    mp[i] = x;
                    cout<<curr_sum<<endl;
                }else{
                    curr_sum -= mp[i];
                    curr_sum += x;
                    mp[i] = x;
                    cout<<curr_sum<<endl;
                }
            }
        }else{
            mp = temp;
            int x;
            cin>>x;
            curr_sum = x*n;
            prev_x = x;
            cout<<curr_sum<<endl;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    unsigned t=1;
    // cin>>t;
    while(t--)solve();
}
/*
    author -> akhlaqhusain
*/
 