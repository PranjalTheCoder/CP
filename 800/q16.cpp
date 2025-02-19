#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // if(n==3 && arr[0] == 1 && arr[1] == 9 && arr[2] == 14){
    //     cout << n << endl;
    //     return;
    // }
    int l = 0;
    int mini = INT_MAX;
    for(int i=1; i<n; i++){
       int t = arr[i] - arr[i-1];
       if(t < mini){
        mini = t;
        l = i-1;
        if(mini < 0){
            cout << 0 << endl;
            return;
        }
       }
    }
    int d = arr[l+1] - arr[l];
  
        int ans = d/2;
        cout << ans+1 << endl;
   

  
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}