#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int t;
cin>>t;
string x;
cin>>x;
int i,one=0,zero=0;
for(i=0;i<x.size();i++){
    if(x[i]=='1'){
        one+=1;
    }
    else{
        zero+=1;
    }
}
cout<<t-(min(one,zero)*2)<<endl;
    return 0;
}
