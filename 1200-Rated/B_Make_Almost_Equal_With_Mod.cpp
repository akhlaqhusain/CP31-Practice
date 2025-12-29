#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long

int32_t main(){
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll k = 1;
        set<ll> ss;
        while(true){
            if(ss.size()==2){
                break;
            }
            ss.clear();
            k = k*2;
            for(int i=0;i<n;i++){
                ss.insert(arr[i]%k);
            }
        }
        cout<<k<<endl;
        
        
    }
    
}