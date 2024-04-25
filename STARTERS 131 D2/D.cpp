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
    if(n%3==0)
    {
        for(int i=1; i<n; i+=3)
        {
            cout<<i<<" "<<i+2<<" "<<i+1<<" ";
        }
    }
    if(n%3==1)
    {
        for(int i=1; i<n; i+=3)
        {
            cout<<i<<" "<<i+2<<" "<<i+1<<" ";
        }
        cout<<n<<" ";
    }
    if(n%3==2)
    {
        cout<<4<<" "<<5<<" "<<2<<" "<<1<<" "<<3<<" ";
        for(int i=6; i<n; i+=3)
        {
            cout<<i+2<<" "<<i+1<<" "<<i<<" ";
        }
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

