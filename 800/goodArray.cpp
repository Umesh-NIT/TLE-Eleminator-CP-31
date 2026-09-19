#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        if(arr[0] == arr[n - 1])cout<<"NO"<<'\n';
        else{
            cout<<"YES"<<'\n';
           
            int l = 0, r = n - 2;
            int a = arr[n - 1];
            cout<<a<<" ";
            while(l <= r){
                if(arr[r] != a){
                    a = arr[r];
                    cout<<a<<" ";
                    r--;
                }
                else{
                    a = arr[l];
                    cout<<a<<" ";
                    l++;
                }
            }
        }
        cout<<'\n';
        
    }
    return 0;
}