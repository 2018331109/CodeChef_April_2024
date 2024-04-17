#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF = 1e18;
const int md = 998244353;
const int mod = 1e9 + 7;
const int N=2e5+5;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    int f=0;
    for(int i=1;i<n;i++)
    {
        if(f==0)
        {
            if(s[i]==s[i-1])
            {
                if(s[i-1]=='0')
                {
                    s[i]='1';
                }
                else
                {
                    s[i]='0';
                }
                cnt++;
                f=1;
            }

        }
        else
        {
            if(s[i]==s[i-1])
            {
                if(s[i]=='1')
                {
                    s[i]='0';
                }
                else
                {
                    s[i]='1';
                }
            }
            else
            {
                cnt++;
                f=0;
            }
        }

    }
    cout<<cnt<<endl;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

