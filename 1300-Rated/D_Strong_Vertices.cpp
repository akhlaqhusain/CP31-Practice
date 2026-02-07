#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(auto &x:a)cin>>x;
    for(auto &x:b)cin>>x;

    vector<int> diff(n);
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        diff[i] = a[i]-b[i];
        mx = max(mx,diff[i]);
    }

    vector<int> res;
    for(int i=0;i<n;i++){
        if(diff[i]==mx){
            res.push_back(i+1);
        }
    }
    cout<<res.size()<<endl;
    for(auto val:res)cout<<val<<" ";cout<<endl;
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
 