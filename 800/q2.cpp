#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // sort(arr.begin(), arr.end());
    int mini = arr[0];
    mini = max(mini, 2*(x-arr[n-1]));
    for(int i=1; i<n; i++){
        mini = max(mini, arr[i]-arr[i-1]);
    }
    cout << mini << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}