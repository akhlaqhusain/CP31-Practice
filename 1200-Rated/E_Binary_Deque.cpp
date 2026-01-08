#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define vi vector<int>
#define vvi vector<vector<int>>
#define mii map<int,int>
#define umii unordered_map<int,int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define take(v) for(auto &x:v)cin>>x;
#define prt(v) for(auto x:v)cout<<x<<' ';cout<<endl;
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
static constexpr auto MOD = 1000000007;

void solve()
{
    int n,s;
    cin>>n>>s;
    vi v(n);
    take(v);
	mii mp;
	mp[0] = -1;
	int sum = 0;
	int len = -1;
	for(int i=0;i<n;i++){
		sum += v[i];
		if(mp.count(sum-s)){
			len = max(len,(i-mp[sum-s]));
		}
		if(!mp.count(sum)){
			mp[sum] = i;
		}
	}
	if(len==-1){
		cout<<len<<endl;
	}
	else{
		cout<<(n-len)<<endl;
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
 