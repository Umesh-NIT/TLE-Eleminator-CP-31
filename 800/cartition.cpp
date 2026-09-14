#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        int moves = -1;
        long long xdiff = 1LL * x2 - x1;
        long long ydiff = 1LL * y2 - y1;
        if(y2 < y1)cout<<moves<<'\n';
        else{
            moves = 0;
            
            int xydiff = abs(ydiff - xdiff);
            moves = 1LL * xydiff + ydiff;
            cout<<moves<<'\n';
        }
    }
    return 0;
}