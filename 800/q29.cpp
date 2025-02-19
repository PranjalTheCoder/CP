#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<ll> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    ll count = 0;
    // while(true){
    //     bool f1 = true;
    // for(int i=1; i<arr.size(); i++){
    //     if(arr[i-1]%2==arr[i]%2){
    //         ll d = arr[i-1] * arr[i];
    //         arr.erase(arr.begin() + i - 1, arr.begin() + i + 1);
    //         arr.insert(arr.begin() + i - 1, d);
    //         count++;
    //         f1 = false;
    //         break;
    //     }
    // }
    // if(f1)
    //     break;
    // }
    for(int i=0; i<n-1; i++){
        if((arr[i]%2 && arr[i+1]%2) || (!(arr[i]%2) && !(arr[i+1]%2)))  count++;
    }
    cout << count << endl;
    // for(int i=0; i<n; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << count << endl;
    // cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}