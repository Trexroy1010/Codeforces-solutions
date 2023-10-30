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
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    for(int i=0;i<n-1;i++){
        if(b[i]+a[i+1]<k){
            //yes;
            b[i]=max(b[i],a[i]);
            b[i+1] = k-b[i];
        }
        else{
           // no;
            b[i]=max(a[i],b[i]);
            b[i+1]=a[i+1];
        }
       // cout<<b[i]<<next;
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        cnt+=(abs(a[i]-b[i]));
    }
    cout<<cnt<<next;
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<next;
}

int32_t main()
{
    ios::sync_with_stdio(true);
    cin.tie(NULL), cout.tie(NULL);
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
