#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        cin>>v[0];
        if(v[0] == 1)v[0] = 2;
        cout<<v[0];
        for(int i = 1; i < n; i++){
            cin>>v[i];
            if(v[i] % v[i - 1] == 0)
            v[i] = v[i]+ 1;
        cout<<" ";
        cout<<v[i];
        }
        cout<<'\n';

    }
    return 0;
}