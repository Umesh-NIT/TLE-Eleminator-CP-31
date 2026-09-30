#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, n;
        cin>>a>>b>>n;
        long long ans = b;
        
        for(int i = 0; i < n; i++){
            int x;
            cin>>x;
           ans += min(x, a -1);
        }
        cout<<ans<<'\n';
    }
    return 0;
}