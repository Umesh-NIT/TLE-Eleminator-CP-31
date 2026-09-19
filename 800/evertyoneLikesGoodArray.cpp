#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a;
        cin>>a;
        int cnt = 0;
        for(int i = 1; i < n; i++){
            long b;
            cin>>b;
            if((a % 2 == 0 && b % 2 == 0) || 
            (a % 2 == 1 && b % 2 == 1)){
                a = b;
                cnt++;
            }
            else a = b;
        }
        cout<<cnt<<'\n';
    }
}