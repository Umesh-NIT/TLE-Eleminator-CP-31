#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int xr = 0;
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++){
            int a;
            cin>>a;
            mp[a]++;
            //xr ^= a;
        }
        int cnt = 0;
        for(auto it: mp){
            if(it.second % 2 == 1){
                cnt++;
                xr ^= it.first;
            }
        }
        if(cnt % 2 == 0 && xr != 0)xr = -1;
        if(cnt % 2 == 0 && xr == 0)xr = mp.begin()->first;
        cout<<xr<<'\n';
    }
    return 0;
}