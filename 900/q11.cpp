#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }
    // while(1){
    //     bool f1 = true;
    // for(int i=0; i<n-1; i++){
    //     if(arr[i+1]%arr[i]==0){
    //         arr[i]++;
    //         f1 = false;
    //     }
    // }
    // if(f1)
    //     break;
    // }
    // int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            arr[i]=2;
            // count++;
        }
    }
    for(int i=1; i<n; i++){
        if(arr[i]%arr[i-1]==0){
            arr[i]++;
            // count++;
        }
    }
    // cout << count << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
