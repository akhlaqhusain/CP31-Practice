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
    vector<string> square(n);
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        square[i] = s;
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int cnt0 = 0,cnt1 = 0;
            square[i][j]-'0'?cnt1++:cnt0++;
            square[j][n-1-i]-'0'?cnt1++:cnt0++;
            square[n-1-i][n-1-j]-'0'?cnt1++:cnt0++;
            square[n-1-j][i]-'0'?cnt1++:cnt0++;  
            if(cnt0==0 || cnt1==0){
                continue;
            }
            if(cnt0<=cnt1){
                ans += cnt0;
                square[i][j] = '1';
                square[j][n-1-i] = '1';
                square[n-1-i][n-1-j] = '1';
                square[n-1-j][i] = '1';
            }else{
                ans += cnt1;
                square[i][j] = '0';
                square[j][n-1-i] = '0';
                square[n-1-i][n-1-j] = '0';
                square[n-1-j][i] = '0';
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
 