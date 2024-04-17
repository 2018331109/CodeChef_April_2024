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
    int i=0;
    vector<int>ans;
    while(i<n-1)
    {
        int cnt=1;
        while(i<n-1 and s[i]==s[i+1])
        {
            cnt++;
            i++;
        }
        if(cnt%2==0)
        {
            i++;
            continue;
        }
        else
        {
            if(ans.size()==0)
            {
                ans.pb(i+1);
            }
            else if(s[ans[ans.size()-1]-1]=='1')
            {
                if(s[i]=='1')
                {
                    ans.pb(i+2);
                }
                else
                {
                    ans.pb(i+1);
                }
            }
            else
            {
                if(s[i]=='0')
                {
                    ans.pb(i+2);
                }
                else
                {
                    ans.pb(i+1);
                }
            }
            i+=2;
        }
    }
    cout<<ans.size()<<endl;
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
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

