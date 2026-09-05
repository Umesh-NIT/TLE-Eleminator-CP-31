#include<bits/stdc++.h>
using namespace std;
bool solve(vector<int> a, int n, int k){
    if(k >= 2)return true;
    for(int i=1; i<n; i++){
        if(a[i]<a[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        cout<<(solve(a, n, k) ? "YES\n" : "NO\n");
    }
    return 0;

}