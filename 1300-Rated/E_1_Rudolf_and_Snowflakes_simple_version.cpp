#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

set<int> ans;

void solve()
{
    int n;
    cin>>n;
    if(ans.count(n))cout<<"YES\n";
    else cout<<"NO\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    for(int k=2;k<=1000;k++){
        int val = 1 + k;
        int p = k*k;
        for(int j=2;j<=20;j++){
            val += p;
            if(val>1e6)break;
            ans.insert(val);
            p *= k;
        }
    }
    unsigned t=1;
    cin>>t;
    while(t--)solve();
}
/*
    author -> akhlaqhusain
*/
 