#include<bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define next "\n"
#define fori for(int i=0;i<n;i++)
#define forj for(int j=0;j<n;j++)
using ll = long long;
typedef long long ll;
const int N = (int)2e5+5;
vector<int>v[1005];
const int cnt = 0;

void solve()
{
  //just sort it in decending order.
    int n;
    cin>>n;
    int a[n];
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<next;


}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
