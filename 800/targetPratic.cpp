#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int ans = 0;
        for(int i = 1; i <= 10; i++){
            for(int j = 1; j <= 10; j++){
                char c; 
                cin>>c;
                if(c == 'X' && i < 6 && j < 6)
                {
                    int val = min(i, j);
                    ans += val;
                }
                else if(c == 'X' && i < 6 && j > 5)
                {
                    int val = min(i, 11 - j);
                    ans += val;
                }
                else if(c == 'X' && i > 5 && j < 6)
                {
                    int val = min(11 - i, j);
                    ans += val;
                }
                else if(c == 'X' && i > 5 && j > 5)
                {
                    int val = min(11 - i, 11 - j);
                    ans += val;
                }
            }
        }
        cout<<ans<<endl;
    }
}