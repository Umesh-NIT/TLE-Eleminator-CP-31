#include<bits/stdc++.h>
using namespace std;
bool solve(vector<int> a, int n, int k){
    sort(a.begin(), a.end());
    for(int i=0; i<n-1; i++){
        if(a[i+1]-a[i]>k){
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