#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int x = n % k;
        int y = n % 2;
        if(n % k == 0 || n % 2 == 0)cout<<"YES"<<'\n';
        else if((x % 2 == 0) || (y%k == 0))cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}