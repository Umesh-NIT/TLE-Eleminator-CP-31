#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
     cin>>t;
    while(t--){
        int n;
        cin>>n;

        map<int,int>mp;
        for(int i = 0; i < n; i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        if(mp.size() > 2)cout<<"NO"<<endl;
        else if(mp.size() == 1){
            cout<<"YES"<<endl;
        }
        else{
            vector<int>v;
            for(auto &it : mp){
                v.push_back(it.second);
            }
            if(abs(v[0] - v[1]) > 1)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}