#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt = 1; 
        char x;
        cin>>x;
        int max_cnt = 1;
        for(int i = 1; i < n; i++){
            char c;
            cin>>c;
            if((c == '<' && x == c) || (c == '>' && x == c)) cnt++;
            else cnt = 1;
            max_cnt = max(max_cnt, cnt);
            x = c;
        }
        cout<<max_cnt + 1<<'\n';
    }
    return 0;
}