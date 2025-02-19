#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> brr(n);
    // reverse(brr.begin(), brr.end());
    for(int i=0; i<n; i++){
        brr[i] = n+1 - arr[i];
    }
    // for(int i=0; i<n; i++){
    //     cout << brr[i] << " ";
    // }
    // cout << endl;
    // for(int i=0; i<n; i++){
    //     cout << arr[i]+brr[i] << " ";
    // }
    // cout << endl << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}