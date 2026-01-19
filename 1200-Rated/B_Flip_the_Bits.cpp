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
    string a,b;
    cin>>a>>b;
    vector<bool> check(n);
    int cnt0 = 0, cnt1 = 0;
    for (int i=0;i<n;i++) {
        if(a[i]=='0'){
            cnt0++;
        }else{
            cnt1++;
        }
        (cnt0==cnt1)?check[i]=true:check[i]=false;
    }
    bool lastMove = false;
    bool ans = true;
    for(int i=n-1;i>=0;i--){
        if(!lastMove){
            if(a[i]!=b[i]){
                if(check[i]){
                    lastMove ^= true;
                }else{
                    ans = false;
                    break;
                }
            }
        }else{
            if(a[i]==b[i]){
                if(check[i]){
                    lastMove ^= true;
                }else{
                    ans = false;
                    break;
                }
            }
        }
    }
    ans?yes:no;
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
 