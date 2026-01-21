#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n,k;
    cin>>n>>k;
    k--;
    if(!(n&1)){
        cout<<(k%n)+1<<endl;
    }else{
        int val = n/2;
        cout<<((k+(k/val))%n)+1<<endl;
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
 