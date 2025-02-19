#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // int counta = arr[0];
    // int countb = 1;
    // // int len = 0;
    // for(int i=1; i<n; i++){
    //     countb *= arr[i];
    // }
    // if(counta == countb){
    //     cout << 1 << endl;
    //     return;
    // }
    // if(counta > countb){
    //     cout << -1 << endl;
    //     return;
    // }
    // else{
    //     for(int i=1; i<n; i++){
    //         if(counta == countb){
    //             cout << i << endl;
    //             return;
    //         }
    //         else if(counta > countb){
    //             cout << -1 << endl;
    //             return;
    //         }
    //         counta *= arr[i];
    //         countb /= arr[i];
    //     }
    // }
    int p = accumulate(arr.begin(), arr.end());
    int c = 0;
    // for(int i=0; i<n;i++){
    //     p*=arr[i];
    // }
    // int c=1;
    for(int i=0; i<n-1; i++){
        c += arr[i];
        int d = p-c;
        if(c==d){
            cout << i+1 << endl;
            return;
        }
        if(c>d){
            break;
        }
    }
    cout << -1 << endl;

}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}