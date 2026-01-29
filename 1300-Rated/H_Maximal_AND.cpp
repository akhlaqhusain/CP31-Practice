#include <bits/stdc++.h>
#define vi vector<int>
#define di deque<int>
#define pii pair<int,int>
#define mpii map<int,int>
#define umpii unordered_map<int,int>
#define take(v) for(auto &x : v) cin >> x
#define prt(v) for(auto &x : v) cout << x << ' '; cout << endl
#define endl '\n'
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define cntbits(x) __builtin_popcountll(x)
#define AKHLAQ unsigned t; cin>>t; while(t--)
using namespace std;

static constexpr auto MOD = 1000000007;
static constexpr auto EPS = 1e-9;

void solve()
{
  int n,k;
  cin>>n>>k;
  vi a(n);
  take(a);
  int temp = a[0];
  for(int i=0;i<n;i++){
    temp &= a[i];
  }
  if(k==0){
    cout<<temp<<endl;
    return;
  }
  deque<int> dq;
  int t = 1;
  for(int i=1;i<=32;i++){
    int cnt = 0;
    for(int j=0;j<n;j++){
      if(a[j]&1){
        cnt++;
      }
      a[j] = a[j]>>1;
    }
    dq.push_front(cnt);
  }
  for(int i=1;i<32;i++){
    int diff = n - dq[i];
    if(diff!=0 && diff<=k){
      k -= diff;
      dq[i] = n;
    }
  }
  if(k%n==0 and k>0){
    dq[31] = n;
  }
  reverse(dq.begin(),dq.end());
  int ans = 0;
  for(int i=0;i<31;i++){
    if(dq[i]==n){
      int temp = 1<<i;
      ans = ans|temp;
    }
  }
  cout<<ans<<endl;
}

int32_t main()
{
//   #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//   #endif
    FAST_IO
  AKHLAQ
  {
    solve();
  }
}
/*
  author -> akhlaqhusain
*/
 