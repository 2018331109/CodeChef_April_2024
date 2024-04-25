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
const int N=3e5+5;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    int s=a[0];
    int i=1;
    while(i<n and a[i]==1)
    {
        s+=1;
        i++;
    }
    if(i<n)
    {
        if(s==1)
        {
            s+=a[i];
        }
        else
        {
            s*=a[i];
        }
    }
    i++;
    s%=mod;
    while(i<n)
    {
        s*=a[i];
        s%=mod;
        i++;
    }
    cout<<s<<endl;
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

