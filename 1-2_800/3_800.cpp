#include<bits/stdc++.h>
using namespace std;
// bool Startfuel(vector<int> &a, int mid, int x, int last){
//     for(int i = 1; i < a.size(); i++){
//         if(abs(a[i] - a[i-1]) > mid)
//             return false;   
//     }
//     if(2*(x - last) > mid)
//             return false;
//     return true;
// }
// int solve(vector<int> &a, int x, int last){
//     int l = 0, r = 2*x;
//     while(l < r){
//         int mid = l + (r - l)/2;
//         if(Startfuel(a, mid,x, last)){
//             r = mid;
//         } else {
//             l = mid + 1;
//         }

//     }

//     return l;
// }
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        // int last = a[n-1];
        a.push_back(x);
        long long ans = 0;
        for(int i = 0; i < n; i++){
           ans = max(ans, abs(a[i] - a[i+1]));
        }
        ans = max(ans, 2*abs(a[n] - a[n-1]));
        cout<<ans << '\n';
        // cout<<solve(a, x, last) << '\n';
    }
    return 0;

}