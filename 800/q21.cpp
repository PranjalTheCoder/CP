#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int count =0;
    int maxi = 0;
   for(int i=0; i<n; i++){
    if(arr[i] == 0){
        count++;
    }
    else{
        maxi = max(maxi, count);
        count = 0;
    }
   }
   maxi = max(maxi, count);
   cout << maxi << endl;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}