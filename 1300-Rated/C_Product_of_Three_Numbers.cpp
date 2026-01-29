#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    set<int> div;
    for(int i=2;i*i<=n;i++){
        if (n%i==0 && !div.count(i)){
            div.insert(i);
            n /= i;
            break;
        }
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0 && !div.count(i)){
            div.insert(i);
            n /= i;
            break;
        }
    }
    if(div.size()<2 || div.count(n) || n==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        div.insert(n);
        for(auto it:div)cout<<it<<" ";cout<<endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    unsigned t = 1;
    cin >> t;
    while (t--)
        solve();
}