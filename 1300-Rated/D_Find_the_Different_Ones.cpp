#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &x:a)cin>>x;
    vector<int> p(n,-1);
    for(int i=1;i<n;i++){
        p[i] = p[i-1];
        if(a[i]!=a[i-1]){
            p[i] = i-1;
        }
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        l--;r--;//for 0-based indexing
        if(p[r]<l){
            cout<<"-1 -1\n";
        }else{
            cout<<p[r]+1<<" "<<r+1<<endl;
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}