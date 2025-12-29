#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    int m = n*(n-1)/2;
    vector<int> b(m);
    for(auto &x:b)cin>>x;
    sort(b.begin(),b.end());
    int l = n-1,f = 0;
    while(l>0){
        cout<<b[f]<<" ";
        f += l;
        l--;
    }
    cout<<(int)1e9<<endl;
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
 