#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string x, s;
        cin>>x>>s;
        int count = 0;
        for(int i = 0;i  < 2*m; i = i + x.size()){
            if(x.find(s) != string::npos){
                break;
            }
            x += x;
            count++;
            
        }
        if(x.find(s) == string::npos){
            count = -1;
        }
        cout << count << endl;
        
    }
}