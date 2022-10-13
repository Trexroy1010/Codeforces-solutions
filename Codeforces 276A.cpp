#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,m;
    cin>>t>>m;
    vector<int>v;
 
    while(t--){
            int a,b;
            cin>>a>>b;
            if(b>=m){
                v.push_back(a-(b-m));
            }
            else{
                v.push_back(a);
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        if(v.size()==0){
            cout<<"-1"<<endl;
        }
        else{
            cout<<v[0]<<endl;
        }
    return 0;
}
