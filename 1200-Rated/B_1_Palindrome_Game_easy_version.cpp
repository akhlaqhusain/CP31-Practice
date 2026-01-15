#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt0 = count(s.begin(),s.end(),'0');
    /* Here, the DRAW condition is not applicable beacause the question says that we have atleast one zero in our given string */
    if(!(cnt0&1) || cnt0==1){
        cout<<"BOB\n";
    }else{
        cout<<"ALICE\n";
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
 