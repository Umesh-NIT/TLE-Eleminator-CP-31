#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> arr(n);
        int first_index = 0;
        
        for(int i = 0; i < n; i++){
            cin>>arr[i];
            if(arr[i] == k){
                first_index = 1;
            }
        }
        if(first_index)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}