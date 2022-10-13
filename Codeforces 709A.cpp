#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m,o;
    cin>>n>>m>>o;
    int a[n],i,count=0,x=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]>m){
            continue;
        }
        else{
            count+=a[i];
        }
 
        if(count>o){
            x+=1;
            count=0;
        }
    }
    cout<<x<<endl;
    return 0;
}
