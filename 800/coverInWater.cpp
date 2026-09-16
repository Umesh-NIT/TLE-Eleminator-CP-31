#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int maxi = 0;
        int cnt = 0;
        int sum = 0;
        for(int i  = 0; i < n; i++){
            if(s[i] == '.'){
                cnt++;
                sum++;
            }
            else cnt = 0;
           
            maxi = max(maxi, cnt);
        }
        cout<<(maxi >= 3 ? 2 :sum)<<'\n';
        
    }
    return 0;
}