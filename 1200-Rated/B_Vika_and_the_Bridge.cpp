#include <bits/stdc++.h>
using namespace std;
/*
    Problem Statement -

    Given a wooden bridge consisting of n-planks and each plank colored to a color between 1 to k.
    Now, we want to pass the bridge and we can only step on to same colored planks and maximum one plank we can repaint with our desired color between 1 to k.

    So, what is the minimum possible maximum number of planks that we will have to step over in one step?

*/
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
    int n,k;
    cin>>n>>k;

    vi a(n);
    take(a);

    if(k==1){cout<<0<<endl;return;}

    vector<int> list[k+1];
    for(int i=1;i<=k;i++){
        list[i].push_back(0);
    }

    for(int i=0;i<n;i++){
        list[a[i]].push_back(i+1);
    }

    for(int i=1;i<=k;i++){
        list[i].push_back(n+1);
    }

    priority_queue<int> jumps[k+1];
    int ans = INT_MAX;

    for(int i=1;i<=k;i++){
        for(int j=0;j<list[i].size()-1;j++){
            jumps[i].push(list[i][j+1]-list[i][j]-1);
        }
        int max_value = jumps[i].top();
        jumps[i].pop();
        jumps[i].push(max_value/2);
        ans = min(ans,jumps[i].top());
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
 