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
    int a=0, b=0;
    string s;
    cin>>s;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    if(n==1 || a==b)
    {
        cout<<"Bob"<<endl;
        return;
    }
    int dif=abs(a-b);
    if(dif==1 || (dif%2==0))
    {
        cout<<"Alice"<<endl;
        return;
    }
    else
    {
        cout<<"Bob"<<endl;
    }

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

