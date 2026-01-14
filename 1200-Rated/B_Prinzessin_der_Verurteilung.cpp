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
    for(char c='a';c<='z';c++){
        string temp;
        temp.push_back(c);
        if(s.find(temp)==string::npos){
            cout<<temp<<endl;
            return;
        }
    }
    for(char c1='a';c1<='z';c1++){
        for(char c2='a';c2<='z';c2++){
            string temp;
            temp.push_back(c1);
            temp.push_back(c2);
            if(s.find(temp)==string::npos){
                cout<<temp<<endl;
                return;
            }
        }
    }
    for(char c1='a';c1<='z';c1++){
        for(char c2='a';c2<='z';c2++){
            for(char c3='a';c3<='z';c3++){
                string temp;
                temp.push_back(c1);
                temp.push_back(c2);
                temp.push_back(c3);
                if(s.find(temp)==string::npos){
                    cout<<temp<<endl;
                    return;
                }
            }
        }
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
 