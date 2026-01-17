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
    string s;
    cin>>s;
    int ans = INT_MAX;
    for(char ch='a';ch<='z';ch++){
        int temp = 0;
        bool flag = true;
        int i=0,j=n-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
                continue;
            }
            if(s[i]==ch){
                temp++;
                i++;
                continue;
            }
            if(s[j]==ch){
                temp++;
                j--;
                continue;
            }
            flag = false;
            break;
        }
        if(!flag){
            temp = INT_MAX;
        }
        ans = min(ans,temp);
    }
    (ans==INT_MAX)?cout<<-1<<endl:cout<<ans<<endl;
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
 