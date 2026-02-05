#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

vector<int> prime_fact(int n){
    vector<int> res;
    while(n%2==0){
        res.push_back(2);
        n /= 2;
    }
    for(int i=3;i*i<=n;i+=2){
        while(n%i==0){
            res.push_back(i);
            n /= i;
        }
    }
    if(n>2)res.push_back(n);
    return res;
}

void solve()
{
    int n;cin>>n;
    vector<int> a(n);
    for(auto &x:a)cin>>x;

    auto verify = [&](int ans){
        if(ans)cout<<"YES\n";
        else cout<<"NO\n";
    };

    map<int,int> mp;
    for(auto val:a){//?O(log(n.log(n)))
        auto ls = prime_fact(val);
        for(auto it:ls)mp[it]++;//?O(log(val))
    }
    for(auto val:mp){
        if(val.second%n!=0){
            verify(0);
            return;
        }
    }
    verify(1);
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
 