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

int bs(vi &pre, int n, int value)
{
	int l = 0,h = n-1;
	int ans = -1;
	while(l<=h)
	{
		int m = (l+h) / 2;
		if(pre[m]<=value)
        {
			ans = m;
			l = m+1;
		}
		else
		{
			h = m-1;
		}
	}
	return ans;
}

void solve()
{
    int n,q;
    cin>>n>>q;
    vi a(n),k(q);
    take(a);
    take(k);
    vi maxi(n), pre_sum(n);
	maxi[0] = a[0];
	pre_sum[0] = a[0];
	for(int i=1;i<n;i++)
	{
		maxi[i] = max(maxi[i-1], a[i]);
		pre_sum[i] = pre_sum[i-1] + a[i];
	}
    for (int i=0;i<q;i++)
	{
		int value = k[i];
		int temp = bs(maxi, n, value);
		if (temp==-1)
		{
			cout<<"0 ";
		}
		else
		{
			cout<<pre_sum[temp]<<" ";
		}
	}
	cout<<endl;
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
 