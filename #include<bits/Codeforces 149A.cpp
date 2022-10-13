#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int i,a[12],count=0,z=0,sum=0;
    for(i=0;i<12;i++){
        cin>>a[i];
        sum+=a[i];
    }
    int y=sizeof(a)/sizeof(a[0]);
    sort(a,a+y, greater<int>());
    if(n==0){
        cout<<"0"<<endl;
    }
    else if(n>sum){
        cout<<"-1"<<endl;
    }
    else{
        for(i=0;i<12;i++){
        if(z<n){
            count+=1;
            z+=a[i];
        }
        else{
            break;
        }
 
    }
    cout<<count<<endl;
    }
    return 0;
}
