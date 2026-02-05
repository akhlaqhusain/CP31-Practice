#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

vector<int> divisors(int n){
    vector<int> res;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(i*i==n){
                res.push_back(i);
            }else{
                res.push_back(i);
                res.push_back(n/i);
            }
        }
    }
    return res;
}

void solve()
{
    int n,k;
    cin>>n>>k;
    if(n<=k){
        cout<<1<<endl;
    }else{
        int ans;
        auto res = divisors(n);
        sort(res.begin(),res.end());
        for(int i=res.size()-1;i>=0;i--){
            if(res[i]<=k){
                ans = n/res[i];
                break;
            }
        }
        cout<<ans<<endl;
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
 