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
    int n;cin>>n;
    vi a(n);
    take(a);
    if(n<=3){
        cout<<-1<<endl;
        return;
    }
    int f = 0,l = n-1;//first and last index of the array
    int curr_min = *min_element(all(a));
    int curr_max = *max_element(all(a));
    while(f<l){
        if(a[f]==curr_min){
            f++;
            curr_min++;
        }else if(a[f]==curr_max){
            f++;
            curr_max--;
        }else if(a[l]==curr_max){
            l--;
            curr_max--;
        }else if(a[l]==curr_min){
            l--;
            curr_min++;
        }else{
            cout<<(f+1)<<" "<<(l+1)<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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
 