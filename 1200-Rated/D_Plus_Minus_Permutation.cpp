#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

void solve()
{
    int n,x,y;
    cin>>n>>x>>y;
    if(x==y){
        cout<<0<<endl;
        return;
    }
    if(x==1){
        int temp = n/y;
        int ans = (n*(n+1)/2) - (temp*(temp+1)/2);
        cout<<ans<<endl;
        return;
    }
    if(y==1){
        int temp = n - n/x;
        int ans = temp*(temp+1)/2;
        cout<<(-1ll*ans)<<endl;
        return;
    }
    int cnt1 = (n / x) - (n / lcm(x, y));
	int cnt2 = (n / y) - (n / lcm(x, y));
    int temp = n - cnt1;
    int ans = ((n*(n+1)/2)-(temp*(temp+1)/2)) - (cnt2*(cnt2+1)/2);
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
 