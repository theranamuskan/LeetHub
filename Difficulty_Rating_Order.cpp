#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
 int t;
 cin>>t;
 while(t--){
     solve();
 }
 return 0;
}