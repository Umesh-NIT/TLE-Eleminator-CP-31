#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxel = INT_MIN; 
        int maxind = 0;
        vector<int>a(n);
        for(int i = 0; i < n; i++){
            int x;
            cin>>x;
            cin>>a[i];
            if(maxel <= x){
                maxind = i;
                maxel = x;
            }
        }
        int min_element = INT_MAX;
        for(int i = 0; i <= maxind; i++){
            min_element = min(min_element, a[i]);
        }
        cout<<(maxel - min_element)<<'\n';
    }
    return 0;
}