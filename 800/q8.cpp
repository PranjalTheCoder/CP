#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n;  i++){
        cin >> arr[i];
    }
    bool f1 = false;
    for(int i=0; i<n; i++){
        if(arr[i] == k){
            f1 = true;
            break;
        }
    }
    if(f1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}