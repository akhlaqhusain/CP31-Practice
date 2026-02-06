#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int mod = 998244353;

void solve()
{
    string s;
    cin>>s;
    int goal1 = 0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            goal1++;
        }
    }
    int goal2 = 1;
    for(int i=0;i<s.size()-1;i++){
        int cnt = 1;
        if(s[i]==s[i+1]){
            while(i<s.size()-1 && s[i]==s[i+1]){
                i++;
                cnt++;
            }
        }
        goal2 = (goal2*cnt)%mod;
    }
    for(int i=1;i<=goal1;i++){
        goal2 = (goal2*i)%mod;
    }
    cout<<goal1<<" "<<goal2<<endl;
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
 