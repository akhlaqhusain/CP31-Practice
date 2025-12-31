#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(m,vector<int>(n));
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cin>>v[i][j];
        }
    }
	for(int i=0;i<m;i++){
		sort(v[i].begin(),v[i].end());
	}
	int ans = 0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			ans -= v[i][j]*(n-j-1);
			ans += v[i][j]*j;
		}
	}
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
 