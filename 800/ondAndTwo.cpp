#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int twos = 0;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            if(a[i] == 2)twos++;
        }
        if(twos % 2 == 1){
            cout<<"-1\n";
        }
        else{
            twos /= 2;
            if(twos == 0){
                cout<<"1\n";
            }
            else{
                for(int i = 0; i < n; i++){

                    if(a[i] == 2){
                        twos--;
                        if(twos == 0){
                            cout<<i + 1<<'\n';
                            break;
                        }
                    }
                }
            }
        }
    
    }
    return 0;
}