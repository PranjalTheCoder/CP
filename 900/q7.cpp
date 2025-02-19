#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    if(n == 1){
        cout << 0 << endl;
        return;
    }
    int maxi=0, count=0;
    sort(arr.begin(), arr.end());
    vector<int> brr(n-1);
    for(int i=1; i<n; i++){
        brr[i-1] = arr[i] - arr[i-1];
    }
    for(int i=0; i<brr.size(); i++){
        if(brr[i]<=k){
            count++;
        }
        else{
            maxi = max(maxi, count);
            count=0;
        }
    }
    maxi = max(maxi, count);
    maxi++;
    // for(int i=0; i<n-1; i++){
    //     cout << brr[i] << " ";
    // }
    // cout << endl << maxi << endl;
    cout << n-maxi << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
